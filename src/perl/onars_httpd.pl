#!/usr/bin/perl

# Copyright (c) 2024. seamus@corvideon.ie, Corvideon Limited T/A Prediction By Invention.

use strict;
use warnings;
use feature ':5.40';
use FindBin;
use Expect;
use Data::UUID;
use Time::HiRes qw(usleep);
use File::Slurp;
use JSON;
use Expect;
use HTTP::Daemon;
use HTTP::Status;

# ---------------------------------------------------
# get the Onars REPL path
# ---------------------------------------------------
my $script_dir = $FindBin::Bin;
my $repl_command = "$script_dir/onars/onars_repl";
my $output_path = "$script_dir/../tmp";

# ---------------------------------------------------
# get the Onars REPL params
# ---------------------------------------------------
my @parameters = (
  "--bin_dir=$script_dir/onars",
  "--bin_name=onars_large_16384",
  "--timeout=10",
  "--output_dir=$output_path"
);

# ---------------------------------------------------
# create an Expect object that spawns the onars CLI
# ---------------------------------------------------
my $onars_cli = Expect->spawn($repl_command, @parameters)
  or die "Cannot spawn $repl_command: $!\n";

# ---------------------------------------------------
# create an HTTP daemon
# ---------------------------------------------------
my $httpd = HTTP::Daemon->new(LocalPort => 8080) || die;
say "Onars REPL HTTPD started at: ", $httpd->url, "\n";

# ---------------------------------------------------
# save the server's PID to a file
# ---------------------------------------------------
my $pid_file = File::Spec->catfile("$output_path", 'onars_repl_httpd.pid');
write_file($pid_file, $$);
print "Server PID: $$ (saved to $pid_file)\n";

# Ensure PID file is deleted when the script exits
END {
  if (-e $pid_file) {
    unlink $pid_file or warn "Could not delete $pid_file: $!";
  }
}


# ---------------------------------------------------
# handle the web request
# ---------------------------------------------------
sub handle_request {
  use strict;
  use warnings;
  use feature 'try';


  my $client = shift;
  my $req = $client->get_request;

  try {
    if ($req->method eq 'POST' && $req->url->path eq '/send_input') {

      # ---------------------------------------------------
      # we have a request so create a GUID
      # ---------------------------------------------------
      my $content = $req->content;
      my $ug = Data::UUID->new;
      my $guid = $ug->create_str();
      my $command = "$guid : $content\n";
      say "Sending to Onars REPL: $command\n";

      # ---------------------------------------------------
      # send the input to the Onars REPL using expect
      # ---------------------------------------------------
      $onars_cli->expect(5, '-re', 'onars');
      $onars_cli->send($command);
      my $output;
      $onars_cli->expect(10, '-re', qr/.+/) && ($output = $onars_cli->before);

      # ---------------------------------------------------
      # look for the output json file
      # ---------------------------------------------------
      my $file_path = "$output_path/$guid.json";
      my $timeout = 2;    # Timeout in seconds
      # Check every 100 milliseconds (100_000 microseconds)
      my $interval = 100_000;
      my $elapsed = 0;

      while ($elapsed < $timeout) {
        if (-e $file_path) {

          # ---------------------------------------------------
          # json output file found, send back via HTTP
          # ---------------------------------------------------
          print "File '$file_path' found.\n";
          my $json_text = File::Slurp::read_file($file_path);
          my $data = JSON::decode_json($json_text);
          my $pretty_json_text = JSON::to_json(
            $data,
            {
              utf8 => 1,
              pretty => 1
            }
          );
          $client->send_response(
            HTTP::Response->new(RC_OK, undef, undef, $pretty_json_text));
          say "Got response from Onars REPL: $pretty_json_text\n";
          last;
        }
        usleep($interval);    # Sleep for 100 milliseconds
        $elapsed += $interval / 1_000_000;    # Convert microseconds to seconds
      }

    }
    else {
      $client->send_error(RC_FORBIDDEN);
    }
  }
  catch ($e) {
    # Handle the exception
    warn "Caught exception: $e";
  };

  $client->close;
  undef($client);
}

# ---------------------------------------------------
# web server loop
# ---------------------------------------------------
while (my $client = $httpd->accept) {
  handle_request($client);
}
