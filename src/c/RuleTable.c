#include "RuleTable.h"
void RuleTable_Apply(Term term1, Term term2, Truth truth1, Truth truth2, long conclusionOccurrence, double occurrenceTimeOffset, Stamp conclusionStamp, long currentTime, double parentPriority, double conceptPriority, bool doublePremise, Concept *validation_concept, long validation_cid)
{
goto RULE_0;
RULE_0:
{
if(!doublePremise) { goto RULE_1; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_1; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_1; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_1; }
substitutions[31] = subtree;
if(term2.atoms[0] != 45){ goto RULE_1; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_1; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_1; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_1; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_1; }
Truth conclusionTruth = Truth_Deduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_1:
{
if(!doublePremise) { goto RULE_2; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_2; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_2; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_2; }
substitutions[34] = subtree;
if(term2.atoms[0] != 45){ goto RULE_2; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_2; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_2; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_2; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_2; }
Truth conclusionTruth = Truth_Deduction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_2:
{
if(!doublePremise) { goto RULE_3; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_3; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_3; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_3; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_3; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_3; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_3; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[30])){ goto RULE_3; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[29])){ goto RULE_3; }
Truth conclusionTruth = Truth_Induction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_3:
{
if(!doublePremise) { goto RULE_4; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_4; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_4; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_4; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_4; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_4; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_4; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[30])){ goto RULE_4; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[29])){ goto RULE_4; }
Truth conclusionTruth = Truth_Induction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_4:
{
if(!doublePremise) { goto RULE_5; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_5; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_5; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_5; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_5; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_5; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_5; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[29])){ goto RULE_5; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[28])){ goto RULE_5; }
Truth conclusionTruth = Truth_Abduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_5:
{
if(!doublePremise) { goto RULE_6; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_6; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_6; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_6; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_6; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_6; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_6; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[29])){ goto RULE_6; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[28])){ goto RULE_6; }
Truth conclusionTruth = Truth_Abduction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_6:
{
if(!doublePremise) { goto RULE_7; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_7; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_7; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_7; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_7; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_7; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_7; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[30])){ goto RULE_7; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[28])){ goto RULE_7; }
Truth conclusionTruth = Truth_Exemplification(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_7:
{
if(!doublePremise) { goto RULE_8; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_8; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_8; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_8; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_8; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_8; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_8; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[30])){ goto RULE_8; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[28])){ goto RULE_8; }
Truth conclusionTruth = Truth_Exemplification(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_8:
{
if(!doublePremise) { goto RULE_9; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
subtree = Term_ExtractSubterm(&term1, 0);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_9; }
substitutions[33] = subtree;
if(term2.atoms[0] != 45){ goto RULE_9; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_9; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_9; }
substitutions[34] = subtree;
Term conclusion = {0};
if(!Term_OverrideSubterm(&conclusion,0,&substitutions[34])){ goto RULE_9; }
Truth conclusionTruth = Truth_Deduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_9:
{
if(!doublePremise) { goto RULE_10; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_10; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_10; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_10; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term2, 0);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_10; }
substitutions[33] = subtree;
Term conclusion = {0};
if(!Term_OverrideSubterm(&conclusion,0,&substitutions[34])){ goto RULE_10; }
Truth conclusionTruth = Truth_Deduction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_10:
{
if(!doublePremise) { goto RULE_11; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
subtree = Term_ExtractSubterm(&term1, 0);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_11; }
substitutions[34] = subtree;
if(term2.atoms[0] != 45){ goto RULE_11; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_11; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_11; }
substitutions[34] = subtree;
Term conclusion = {0};
if(!Term_OverrideSubterm(&conclusion,0,&substitutions[33])){ goto RULE_11; }
Truth conclusionTruth = Truth_Abduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_11:
{
if(!doublePremise) { goto RULE_12; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_12; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_12; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_12; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term2, 0);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_12; }
substitutions[34] = subtree;
Term conclusion = {0};
if(!Term_OverrideSubterm(&conclusion,0,&substitutions[33])){ goto RULE_12; }
Truth conclusionTruth = Truth_Abduction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_12:
{
if(doublePremise) { goto RULE_13; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 46){ goto RULE_13; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_13; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_13; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 46;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[34])){ goto RULE_13; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[33])){ goto RULE_13; }
Truth conclusionTruth = Truth_StructuralIntersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_13:
{
if(!doublePremise) { goto RULE_14; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 46){ goto RULE_14; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_14; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_14; }
substitutions[34] = subtree;
if(term2.atoms[0] != 46){ goto RULE_14; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_14; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_14; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 46;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_14; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_14; }
Truth conclusionTruth = Truth_Resemblance(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_14:
{
if(!doublePremise) { goto RULE_15; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 46){ goto RULE_15; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_15; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_15; }
substitutions[31] = subtree;
if(term2.atoms[0] != 46){ goto RULE_15; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_15; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_15; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 46;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_15; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_15; }
Truth conclusionTruth = Truth_Resemblance(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_15:
{
if(!doublePremise) { goto RULE_16; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_16; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_16; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_16; }
substitutions[31] = subtree;
if(term2.atoms[0] != 45){ goto RULE_16; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_16; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_16; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 46;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_16; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_16; }
Truth conclusionTruth = Truth_Comparison(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_16:
{
if(!doublePremise) { goto RULE_17; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_17; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_17; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_17; }
substitutions[31] = subtree;
if(term2.atoms[0] != 45){ goto RULE_17; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_17; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_17; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 46;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_17; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_17; }
Truth conclusionTruth = Truth_Comparison(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_17:
{
if(!doublePremise) { goto RULE_18; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_18; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_18; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_18; }
substitutions[34] = subtree;
if(term2.atoms[0] != 45){ goto RULE_18; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_18; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_18; }
substitutions[33] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 46;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_18; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_18; }
Truth conclusionTruth = Truth_Comparison(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_18:
{
if(!doublePremise) { goto RULE_19; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_19; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_19; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_19; }
substitutions[33] = subtree;
if(term2.atoms[0] != 45){ goto RULE_19; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_19; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_19; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 46;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_19; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_19; }
Truth conclusionTruth = Truth_Comparison(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_19:
{
if(!doublePremise) { goto RULE_20; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_20; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_20; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_20; }
substitutions[34] = subtree;
if(term2.atoms[0] != 46){ goto RULE_20; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_20; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_20; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_20; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_20; }
Truth conclusionTruth = Truth_Analogy(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_20:
{
if(!doublePremise) { goto RULE_21; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 46){ goto RULE_21; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_21; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_21; }
substitutions[31] = subtree;
if(term2.atoms[0] != 45){ goto RULE_21; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_21; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_21; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_21; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_21; }
Truth conclusionTruth = Truth_Analogy(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_21:
{
if(!doublePremise) { goto RULE_22; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_22; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_22; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_22; }
substitutions[31] = subtree;
if(term2.atoms[0] != 46){ goto RULE_22; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_22; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_22; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[34])){ goto RULE_22; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[33])){ goto RULE_22; }
Truth conclusionTruth = Truth_Analogy(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_22:
{
if(!doublePremise) { goto RULE_23; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 46){ goto RULE_23; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_23; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_23; }
substitutions[31] = subtree;
if(term2.atoms[0] != 45){ goto RULE_23; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_23; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_23; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[34])){ goto RULE_23; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[33])){ goto RULE_23; }
Truth conclusionTruth = Truth_Analogy(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_23:
{
if(!doublePremise) { goto RULE_24; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
subtree = Term_ExtractSubterm(&term1, 0);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_24; }
substitutions[33] = subtree;
if(term2.atoms[0] != 46){ goto RULE_24; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_24; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_24; }
substitutions[34] = subtree;
Term conclusion = {0};
if(!Term_OverrideSubterm(&conclusion,0,&substitutions[34])){ goto RULE_24; }
Truth conclusionTruth = Truth_Analogy(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_24:
{
if(!doublePremise) { goto RULE_25; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 46){ goto RULE_25; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_25; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_25; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term2, 0);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_25; }
substitutions[33] = subtree;
Term conclusion = {0};
if(!Term_OverrideSubterm(&conclusion,0,&substitutions[34])){ goto RULE_25; }
Truth conclusionTruth = Truth_Analogy(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_25:
{
if(!doublePremise) { goto RULE_26; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
subtree = Term_ExtractSubterm(&term1, 0);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_26; }
substitutions[33] = subtree;
if(term2.atoms[0] != 46){ goto RULE_26; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_26; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_26; }
substitutions[33] = subtree;
Term conclusion = {0};
if(!Term_OverrideSubterm(&conclusion,0,&substitutions[34])){ goto RULE_26; }
Truth conclusionTruth = Truth_Analogy(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_26:
{
if(!doublePremise) { goto RULE_27; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 46){ goto RULE_27; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_27; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_27; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 0);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_27; }
substitutions[33] = subtree;
Term conclusion = {0};
if(!Term_OverrideSubterm(&conclusion,0,&substitutions[34])){ goto RULE_27; }
Truth conclusionTruth = Truth_Analogy(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_27:
{
if(doublePremise) { goto RULE_28; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_28; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_28; }
substitutions[33] = subtree;
if(term1.atoms[2] != 49){ goto RULE_28; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_28; }
substitutions[34] = subtree;
if(term1.atoms[6] != 40){ goto RULE_28; }
Term conclusion = {0};
conclusion.atoms[0] = 46;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_28; }
conclusion.atoms[2] = 49;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[34])){ goto RULE_28; }
conclusion.atoms[6] = 40;
Truth conclusionTruth = Truth_StructuralIntersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_28:
{
if(doublePremise) { goto RULE_29; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_29; }
if(term1.atoms[1] != 48){ goto RULE_29; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_29; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_29; }
substitutions[33] = subtree;
if(term1.atoms[4] != 40){ goto RULE_29; }
Term conclusion = {0};
conclusion.atoms[0] = 46;
conclusion.atoms[1] = 48;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_29; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[33])){ goto RULE_29; }
conclusion.atoms[4] = 40;
Truth conclusionTruth = Truth_StructuralIntersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_29:
{
if(!doublePremise) { goto RULE_30; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_30; }
if(term1.atoms[1] != 49){ goto RULE_30; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_30; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_30; }
substitutions[31] = subtree;
if(term1.atoms[4] != 40){ goto RULE_30; }
if(term2.atoms[0] != 46){ goto RULE_30; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_30; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_30; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 49;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_30; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[33])){ goto RULE_30; }
conclusion.atoms[4] = 40;
Truth conclusionTruth = Truth_Analogy(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_30:
{
if(!doublePremise) { goto RULE_31; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 46){ goto RULE_31; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_31; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_31; }
substitutions[31] = subtree;
if(term2.atoms[0] != 45){ goto RULE_31; }
if(term2.atoms[1] != 49){ goto RULE_31; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_31; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_31; }
substitutions[31] = subtree;
if(term2.atoms[4] != 40){ goto RULE_31; }
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 49;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_31; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[33])){ goto RULE_31; }
conclusion.atoms[4] = 40;
Truth conclusionTruth = Truth_Analogy(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_31:
{
if(!doublePremise) { goto RULE_32; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_32; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_32; }
substitutions[34] = subtree;
if(term1.atoms[2] != 48){ goto RULE_32; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_32; }
substitutions[31] = subtree;
if(term1.atoms[6] != 40){ goto RULE_32; }
if(term2.atoms[0] != 46){ goto RULE_32; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_32; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_32; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[34])){ goto RULE_32; }
conclusion.atoms[2] = 48;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[33])){ goto RULE_32; }
conclusion.atoms[6] = 40;
Truth conclusionTruth = Truth_Analogy(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_32:
{
if(!doublePremise) { goto RULE_33; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 46){ goto RULE_33; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_33; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_33; }
substitutions[31] = subtree;
if(term2.atoms[0] != 45){ goto RULE_33; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_33; }
substitutions[34] = subtree;
if(term2.atoms[2] != 48){ goto RULE_33; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_33; }
substitutions[31] = subtree;
if(term2.atoms[6] != 40){ goto RULE_33; }
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[34])){ goto RULE_33; }
conclusion.atoms[2] = 48;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[33])){ goto RULE_33; }
conclusion.atoms[6] = 40;
Truth conclusionTruth = Truth_Analogy(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_33:
{
if(doublePremise) { goto RULE_34; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 46){ goto RULE_34; }
if(term1.atoms[1] != 49){ goto RULE_34; }
if(term1.atoms[2] != 49){ goto RULE_34; }
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_34; }
substitutions[28] = subtree;
if(term1.atoms[4] != 40){ goto RULE_34; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_34; }
substitutions[29] = subtree;
if(term1.atoms[6] != 40){ goto RULE_34; }
Term conclusion = {0};
conclusion.atoms[0] = 46;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[28])){ goto RULE_34; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[29])){ goto RULE_34; }
Truth conclusionTruth = Truth_StructuralIntersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_34:
{
if(doublePremise) { goto RULE_35; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 46){ goto RULE_35; }
if(term1.atoms[1] != 48){ goto RULE_35; }
if(term1.atoms[2] != 48){ goto RULE_35; }
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_35; }
substitutions[28] = subtree;
if(term1.atoms[4] != 40){ goto RULE_35; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_35; }
substitutions[29] = subtree;
if(term1.atoms[6] != 40){ goto RULE_35; }
Term conclusion = {0};
conclusion.atoms[0] = 46;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[28])){ goto RULE_35; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[29])){ goto RULE_35; }
Truth conclusionTruth = Truth_StructuralIntersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_35:
{
if(doublePremise) { goto RULE_36; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_36; }
if(term1.atoms[1] != 49){ goto RULE_36; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_36; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_36; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_36; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 49;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_36; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[28])){ goto RULE_36; }
conclusion.atoms[4] = 40;
Truth conclusionTruth = Truth_StructuralDeduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_36:
{
if(doublePremise) { goto RULE_37; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_37; }
if(term1.atoms[1] != 49){ goto RULE_37; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_37; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_37; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_37; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 49;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_37; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[29])){ goto RULE_37; }
conclusion.atoms[4] = 40;
Truth conclusionTruth = Truth_StructuralDeduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_37:
{
if(doublePremise) { goto RULE_38; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_38; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_38; }
substitutions[31] = subtree;
if(term1.atoms[2] != 48){ goto RULE_38; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_38; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_38; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_38; }
conclusion.atoms[2] = 48;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_38; }
conclusion.atoms[6] = 40;
Truth conclusionTruth = Truth_StructuralDeduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_38:
{
if(doublePremise) { goto RULE_39; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_39; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_39; }
substitutions[31] = subtree;
if(term1.atoms[2] != 48){ goto RULE_39; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_39; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_39; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_39; }
conclusion.atoms[2] = 48;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[29])){ goto RULE_39; }
conclusion.atoms[6] = 40;
Truth conclusionTruth = Truth_StructuralDeduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_39:
{
if(doublePremise) { goto RULE_40; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_40; }
if(term1.atoms[1] != 43){ goto RULE_40; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_40; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_40; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_40; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_40; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_40; }
Truth conclusionTruth = Truth_StructuralDeduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_40:
{
if(doublePremise) { goto RULE_41; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_41; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_41; }
substitutions[31] = subtree;
if(term1.atoms[2] != 42){ goto RULE_41; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_41; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_41; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_41; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[33])){ goto RULE_41; }
Truth conclusionTruth = Truth_StructuralDeduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_41:
{
if(doublePremise) { goto RULE_42; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_42; }
if(term1.atoms[1] != 43){ goto RULE_42; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_42; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_42; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_42; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[34])){ goto RULE_42; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_42; }
Truth conclusionTruth = Truth_StructuralDeduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_42:
{
if(doublePremise) { goto RULE_43; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_43; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_43; }
substitutions[31] = subtree;
if(term1.atoms[2] != 42){ goto RULE_43; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_43; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_43; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_43; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_43; }
Truth conclusionTruth = Truth_StructuralDeduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_43:
{
if(doublePremise) { goto RULE_44; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_44; }
if(term1.atoms[1] != 56){ goto RULE_44; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_44; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_44; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_44; }
substitutions[33] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[28])){ goto RULE_44; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_44; }
Truth conclusionTruth = Truth_StructuralDeduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_44:
{
if(doublePremise) { goto RULE_45; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_45; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_45; }
substitutions[31] = subtree;
if(term1.atoms[2] != 53){ goto RULE_45; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_45; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_45; }
substitutions[33] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_45; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[29])){ goto RULE_45; }
Truth conclusionTruth = Truth_StructuralDeduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_45:
{
if(doublePremise) { goto RULE_46; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_46; }
if(term1.atoms[1] != 56){ goto RULE_46; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_46; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_46; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_46; }
substitutions[33] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_46; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_46; }
Truth conclusionTruth = Truth_StructuralDeductionNegated(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_46:
{
if(doublePremise) { goto RULE_47; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_47; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_47; }
substitutions[31] = subtree;
if(term1.atoms[2] != 53){ goto RULE_47; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_47; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_47; }
substitutions[33] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_47; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[33])){ goto RULE_47; }
Truth conclusionTruth = Truth_StructuralDeductionNegated(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_47:
{
if(!doublePremise) { goto RULE_48; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_48; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_48; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_48; }
substitutions[31] = subtree;
if(term2.atoms[0] != 45){ goto RULE_48; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_48; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_48; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 43;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_48; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[34])){ goto RULE_48; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[33])){ goto RULE_48; }
Truth conclusionTruth = Truth_Intersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_48:
{
if(!doublePremise) { goto RULE_49; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_49; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_49; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_49; }
substitutions[31] = subtree;
if(term2.atoms[0] != 45){ goto RULE_49; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_49; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_49; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 43;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_49; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[34])){ goto RULE_49; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[33])){ goto RULE_49; }
Truth conclusionTruth = Truth_Intersection(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_49:
{
if(!doublePremise) { goto RULE_50; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_50; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_50; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_50; }
substitutions[31] = subtree;
if(term2.atoms[0] != 45){ goto RULE_50; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_50; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_50; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 42;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_50; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[34])){ goto RULE_50; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[33])){ goto RULE_50; }
Truth conclusionTruth = Truth_Union(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_50:
{
if(!doublePremise) { goto RULE_51; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_51; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_51; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_51; }
substitutions[31] = subtree;
if(term2.atoms[0] != 45){ goto RULE_51; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_51; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_51; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 42;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_51; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[34])){ goto RULE_51; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[33])){ goto RULE_51; }
Truth conclusionTruth = Truth_Union(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_51:
{
if(!doublePremise) { goto RULE_52; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_52; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_52; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_52; }
substitutions[31] = subtree;
if(term2.atoms[0] != 45){ goto RULE_52; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_52; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_52; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 56;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_52; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[34])){ goto RULE_52; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[33])){ goto RULE_52; }
Truth conclusionTruth = Truth_Difference(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_52:
{
if(!doublePremise) { goto RULE_53; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_53; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_53; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_53; }
substitutions[31] = subtree;
if(term2.atoms[0] != 45){ goto RULE_53; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_53; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_53; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 56;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_53; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[34])){ goto RULE_53; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[33])){ goto RULE_53; }
Truth conclusionTruth = Truth_Difference(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_53:
{
if(!doublePremise) { goto RULE_54; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_54; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_54; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_54; }
substitutions[34] = subtree;
if(term2.atoms[0] != 45){ goto RULE_54; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_54; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_54; }
substitutions[33] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_54; }
conclusion.atoms[2] = 42;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[34])){ goto RULE_54; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[33])){ goto RULE_54; }
Truth conclusionTruth = Truth_Intersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_54:
{
if(!doublePremise) { goto RULE_55; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_55; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_55; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_55; }
substitutions[33] = subtree;
if(term2.atoms[0] != 45){ goto RULE_55; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_55; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_55; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_55; }
conclusion.atoms[2] = 42;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[34])){ goto RULE_55; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[33])){ goto RULE_55; }
Truth conclusionTruth = Truth_Intersection(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_55:
{
if(!doublePremise) { goto RULE_56; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_56; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_56; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_56; }
substitutions[34] = subtree;
if(term2.atoms[0] != 45){ goto RULE_56; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_56; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_56; }
substitutions[33] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_56; }
conclusion.atoms[2] = 43;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[34])){ goto RULE_56; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[33])){ goto RULE_56; }
Truth conclusionTruth = Truth_Union(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_56:
{
if(!doublePremise) { goto RULE_57; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_57; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_57; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_57; }
substitutions[33] = subtree;
if(term2.atoms[0] != 45){ goto RULE_57; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_57; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_57; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_57; }
conclusion.atoms[2] = 43;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[34])){ goto RULE_57; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[33])){ goto RULE_57; }
Truth conclusionTruth = Truth_Union(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_57:
{
if(!doublePremise) { goto RULE_58; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_58; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_58; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_58; }
substitutions[34] = subtree;
if(term2.atoms[0] != 45){ goto RULE_58; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_58; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_58; }
substitutions[33] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_58; }
conclusion.atoms[2] = 53;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[34])){ goto RULE_58; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[33])){ goto RULE_58; }
Truth conclusionTruth = Truth_Difference(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_58:
{
if(!doublePremise) { goto RULE_59; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_59; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_59; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_59; }
substitutions[33] = subtree;
if(term2.atoms[0] != 45){ goto RULE_59; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_59; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_59; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_59; }
conclusion.atoms[2] = 53;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[34])){ goto RULE_59; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[33])){ goto RULE_59; }
Truth conclusionTruth = Truth_Difference(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_59:
{
if(!doublePremise) { goto RULE_60; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_60; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_60; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_60; }
substitutions[31] = subtree;
if(term2.atoms[0] != 45){ goto RULE_60; }
if(term2.atoms[1] != 43){ goto RULE_60; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_60; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_60; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_60; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[34])){ goto RULE_60; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_60; }
Truth conclusionTruth = Truth_DecomposePNN(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_60:
{
if(!doublePremise) { goto RULE_61; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_61; }
if(term1.atoms[1] != 43){ goto RULE_61; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_61; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_61; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_61; }
substitutions[34] = subtree;
if(term2.atoms[0] != 45){ goto RULE_61; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_61; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_61; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[34])){ goto RULE_61; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_61; }
Truth conclusionTruth = Truth_DecomposePNN(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_61:
{
if(!doublePremise) { goto RULE_62; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_62; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_62; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_62; }
substitutions[31] = subtree;
if(term2.atoms[0] != 45){ goto RULE_62; }
if(term2.atoms[1] != 43){ goto RULE_62; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_62; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_62; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_62; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_62; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_62; }
Truth conclusionTruth = Truth_DecomposePNN(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_62:
{
if(!doublePremise) { goto RULE_63; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_63; }
if(term1.atoms[1] != 43){ goto RULE_63; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_63; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_63; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_63; }
substitutions[34] = subtree;
if(term2.atoms[0] != 45){ goto RULE_63; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_63; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_63; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_63; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_63; }
Truth conclusionTruth = Truth_DecomposePNN(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_63:
{
if(!doublePremise) { goto RULE_64; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_64; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_64; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_64; }
substitutions[31] = subtree;
if(term2.atoms[0] != 45){ goto RULE_64; }
if(term2.atoms[1] != 42){ goto RULE_64; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_64; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_64; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_64; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[34])){ goto RULE_64; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_64; }
Truth conclusionTruth = Truth_DecomposeNPP(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_64:
{
if(!doublePremise) { goto RULE_65; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_65; }
if(term1.atoms[1] != 42){ goto RULE_65; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_65; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_65; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_65; }
substitutions[34] = subtree;
if(term2.atoms[0] != 45){ goto RULE_65; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_65; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_65; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[34])){ goto RULE_65; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_65; }
Truth conclusionTruth = Truth_DecomposeNPP(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_65:
{
if(!doublePremise) { goto RULE_66; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_66; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_66; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_66; }
substitutions[31] = subtree;
if(term2.atoms[0] != 45){ goto RULE_66; }
if(term2.atoms[1] != 42){ goto RULE_66; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_66; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_66; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_66; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_66; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_66; }
Truth conclusionTruth = Truth_DecomposeNPP(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_66:
{
if(!doublePremise) { goto RULE_67; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_67; }
if(term1.atoms[1] != 42){ goto RULE_67; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_67; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_67; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_67; }
substitutions[34] = subtree;
if(term2.atoms[0] != 45){ goto RULE_67; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_67; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_67; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_67; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_67; }
Truth conclusionTruth = Truth_DecomposeNPP(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_67:
{
if(!doublePremise) { goto RULE_68; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_68; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_68; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_68; }
substitutions[31] = subtree;
if(term2.atoms[0] != 45){ goto RULE_68; }
if(term2.atoms[1] != 56){ goto RULE_68; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_68; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_68; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_68; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[34])){ goto RULE_68; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_68; }
Truth conclusionTruth = Truth_DecomposePNP(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_68:
{
if(!doublePremise) { goto RULE_69; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_69; }
if(term1.atoms[1] != 56){ goto RULE_69; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_69; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_69; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_69; }
substitutions[34] = subtree;
if(term2.atoms[0] != 45){ goto RULE_69; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_69; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_69; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[34])){ goto RULE_69; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_69; }
Truth conclusionTruth = Truth_DecomposePNP(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_69:
{
if(!doublePremise) { goto RULE_70; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_70; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_70; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_70; }
substitutions[31] = subtree;
if(term2.atoms[0] != 45){ goto RULE_70; }
if(term2.atoms[1] != 56){ goto RULE_70; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_70; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_70; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_70; }
substitutions[33] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[34])){ goto RULE_70; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_70; }
Truth conclusionTruth = Truth_DecomposeNNN(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_70:
{
if(!doublePremise) { goto RULE_71; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_71; }
if(term1.atoms[1] != 56){ goto RULE_71; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_71; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_71; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_71; }
substitutions[33] = subtree;
if(term2.atoms[0] != 45){ goto RULE_71; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_71; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_71; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[34])){ goto RULE_71; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_71; }
Truth conclusionTruth = Truth_DecomposeNNN(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_71:
{
if(!doublePremise) { goto RULE_72; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_72; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_72; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_72; }
substitutions[33] = subtree;
if(term2.atoms[0] != 45){ goto RULE_72; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_72; }
substitutions[31] = subtree;
if(term2.atoms[2] != 42){ goto RULE_72; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_72; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 6);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_72; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_72; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_72; }
Truth conclusionTruth = Truth_DecomposePNN(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_72:
{
if(!doublePremise) { goto RULE_73; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_73; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_73; }
substitutions[31] = subtree;
if(term1.atoms[2] != 42){ goto RULE_73; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_73; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_73; }
substitutions[34] = subtree;
if(term2.atoms[0] != 45){ goto RULE_73; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_73; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_73; }
substitutions[33] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_73; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_73; }
Truth conclusionTruth = Truth_DecomposePNN(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_73:
{
if(!doublePremise) { goto RULE_74; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_74; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_74; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_74; }
substitutions[34] = subtree;
if(term2.atoms[0] != 45){ goto RULE_74; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_74; }
substitutions[31] = subtree;
if(term2.atoms[2] != 42){ goto RULE_74; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_74; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 6);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_74; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_74; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[33])){ goto RULE_74; }
Truth conclusionTruth = Truth_DecomposePNN(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_74:
{
if(!doublePremise) { goto RULE_75; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_75; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_75; }
substitutions[31] = subtree;
if(term1.atoms[2] != 42){ goto RULE_75; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_75; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_75; }
substitutions[34] = subtree;
if(term2.atoms[0] != 45){ goto RULE_75; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_75; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_75; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_75; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[33])){ goto RULE_75; }
Truth conclusionTruth = Truth_DecomposePNN(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_75:
{
if(!doublePremise) { goto RULE_76; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_76; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_76; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_76; }
substitutions[33] = subtree;
if(term2.atoms[0] != 45){ goto RULE_76; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_76; }
substitutions[31] = subtree;
if(term2.atoms[2] != 43){ goto RULE_76; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_76; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 6);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_76; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_76; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_76; }
Truth conclusionTruth = Truth_DecomposeNPP(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_76:
{
if(!doublePremise) { goto RULE_77; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_77; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_77; }
substitutions[31] = subtree;
if(term1.atoms[2] != 43){ goto RULE_77; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_77; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_77; }
substitutions[34] = subtree;
if(term2.atoms[0] != 45){ goto RULE_77; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_77; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_77; }
substitutions[33] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_77; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_77; }
Truth conclusionTruth = Truth_DecomposeNPP(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_77:
{
if(!doublePremise) { goto RULE_78; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_78; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_78; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_78; }
substitutions[34] = subtree;
if(term2.atoms[0] != 45){ goto RULE_78; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_78; }
substitutions[31] = subtree;
if(term2.atoms[2] != 43){ goto RULE_78; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_78; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 6);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_78; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_78; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[33])){ goto RULE_78; }
Truth conclusionTruth = Truth_DecomposeNPP(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_78:
{
if(!doublePremise) { goto RULE_79; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_79; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_79; }
substitutions[31] = subtree;
if(term1.atoms[2] != 43){ goto RULE_79; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_79; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_79; }
substitutions[34] = subtree;
if(term2.atoms[0] != 45){ goto RULE_79; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_79; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_79; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_79; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[33])){ goto RULE_79; }
Truth conclusionTruth = Truth_DecomposeNPP(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_79:
{
if(!doublePremise) { goto RULE_80; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_80; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_80; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_80; }
substitutions[33] = subtree;
if(term2.atoms[0] != 45){ goto RULE_80; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_80; }
substitutions[31] = subtree;
if(term2.atoms[2] != 53){ goto RULE_80; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_80; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 6);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_80; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_80; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_80; }
Truth conclusionTruth = Truth_DecomposePNP(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_80:
{
if(!doublePremise) { goto RULE_81; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_81; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_81; }
substitutions[31] = subtree;
if(term1.atoms[2] != 53){ goto RULE_81; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_81; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_81; }
substitutions[34] = subtree;
if(term2.atoms[0] != 45){ goto RULE_81; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_81; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_81; }
substitutions[33] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_81; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_81; }
Truth conclusionTruth = Truth_DecomposePNP(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_81:
{
if(!doublePremise) { goto RULE_82; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_82; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_82; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_82; }
substitutions[33] = subtree;
if(term2.atoms[0] != 45){ goto RULE_82; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_82; }
substitutions[31] = subtree;
if(term2.atoms[2] != 53){ goto RULE_82; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_82; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term2, 6);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_82; }
substitutions[33] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_82; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_82; }
Truth conclusionTruth = Truth_DecomposeNNN(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_82:
{
if(!doublePremise) { goto RULE_83; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_83; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_83; }
substitutions[31] = subtree;
if(term1.atoms[2] != 53){ goto RULE_83; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_83; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_83; }
substitutions[33] = subtree;
if(term2.atoms[0] != 45){ goto RULE_83; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_83; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_83; }
substitutions[33] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_83; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_83; }
Truth conclusionTruth = Truth_DecomposeNNN(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_83:
{
if(doublePremise) { goto RULE_84; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_84; }
if(term1.atoms[1] != 41){ goto RULE_84; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_84; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_84; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_84; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[28])){ goto RULE_84; }
conclusion.atoms[2] = 50;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[32])){ goto RULE_84; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[29])){ goto RULE_84; }
Truth conclusionTruth = Truth_StructuralIntersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_84:
{
if(doublePremise) { goto RULE_85; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_85; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_85; }
substitutions[28] = subtree;
if(term1.atoms[2] != 50){ goto RULE_85; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_85; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_85; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 41;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[32])){ goto RULE_85; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[28])){ goto RULE_85; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_85; }
Truth conclusionTruth = Truth_StructuralIntersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_85:
{
if(doublePremise) { goto RULE_86; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_86; }
if(term1.atoms[1] != 41){ goto RULE_86; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_86; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_86; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_86; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[29])){ goto RULE_86; }
conclusion.atoms[2] = 54;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[32])){ goto RULE_86; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[28])){ goto RULE_86; }
Truth conclusionTruth = Truth_StructuralIntersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_86:
{
if(doublePremise) { goto RULE_87; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_87; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_87; }
substitutions[29] = subtree;
if(term1.atoms[2] != 54){ goto RULE_87; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_87; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_87; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 41;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[32])){ goto RULE_87; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[28])){ goto RULE_87; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_87; }
Truth conclusionTruth = Truth_StructuralIntersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_87:
{
if(doublePremise) { goto RULE_88; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_88; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_88; }
substitutions[32] = subtree;
if(term1.atoms[2] != 41){ goto RULE_88; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_88; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_88; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 51;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[28])){ goto RULE_88; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[32])){ goto RULE_88; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_88; }
Truth conclusionTruth = Truth_StructuralIntersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_88:
{
if(doublePremise) { goto RULE_89; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_89; }
if(term1.atoms[1] != 51){ goto RULE_89; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_89; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_89; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_89; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[32])){ goto RULE_89; }
conclusion.atoms[2] = 41;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_89; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[29])){ goto RULE_89; }
Truth conclusionTruth = Truth_StructuralIntersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_89:
{
if(doublePremise) { goto RULE_90; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_90; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_90; }
substitutions[32] = subtree;
if(term1.atoms[2] != 41){ goto RULE_90; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_90; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_90; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 55;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[29])){ goto RULE_90; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[32])){ goto RULE_90; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[28])){ goto RULE_90; }
Truth conclusionTruth = Truth_StructuralIntersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_90:
{
if(doublePremise) { goto RULE_91; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_91; }
if(term1.atoms[1] != 55){ goto RULE_91; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_91; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_91; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_91; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[32])){ goto RULE_91; }
conclusion.atoms[2] = 41;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_91; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[29])){ goto RULE_91; }
Truth conclusionTruth = Truth_StructuralIntersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_91:
{
if(!doublePremise) { goto RULE_92; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 62){ goto RULE_92; }
if(term1.atoms[1] != 49){ goto RULE_92; }
if(term1.atoms[2] != 48){ goto RULE_92; }
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_92; }
substitutions[32] = subtree;
if(term1.atoms[4] != 40){ goto RULE_92; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_92; }
substitutions[34] = subtree;
if(term1.atoms[6] != 40){ goto RULE_92; }
if(term2.atoms[0] != 62){ goto RULE_92; }
if(term2.atoms[1] != 49){ goto RULE_92; }
if(term2.atoms[2] != 48){ goto RULE_92; }
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_92; }
substitutions[33] = subtree;
if(term2.atoms[4] != 40){ goto RULE_92; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_92; }
substitutions[34] = subtree;
if(term2.atoms[6] != 40){ goto RULE_92; }
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 41;
conclusion.atoms[2] = 57;
conclusion.atoms[3] = 49;
conclusion.atoms[4] = 49;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[34])){ goto RULE_92; }
conclusion.atoms[6] = 40;
if(!Term_OverrideSubterm(&conclusion,7,&substitutions[32])){ goto RULE_92; }
conclusion.atoms[8] = 40;
if(!Term_OverrideSubterm(&conclusion,9,&substitutions[33])){ goto RULE_92; }
conclusion.atoms[10] = 40;
Truth conclusionTruth = Truth_FrequencyGreater(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_92:
{
if(!doublePremise) { goto RULE_93; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 62){ goto RULE_93; }
if(term1.atoms[1] != 49){ goto RULE_93; }
if(term1.atoms[2] != 48){ goto RULE_93; }
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_93; }
substitutions[33] = subtree;
if(term1.atoms[4] != 40){ goto RULE_93; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_93; }
substitutions[34] = subtree;
if(term1.atoms[6] != 40){ goto RULE_93; }
if(term2.atoms[0] != 62){ goto RULE_93; }
if(term2.atoms[1] != 49){ goto RULE_93; }
if(term2.atoms[2] != 48){ goto RULE_93; }
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_93; }
substitutions[32] = subtree;
if(term2.atoms[4] != 40){ goto RULE_93; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_93; }
substitutions[34] = subtree;
if(term2.atoms[6] != 40){ goto RULE_93; }
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 41;
conclusion.atoms[2] = 57;
conclusion.atoms[3] = 49;
conclusion.atoms[4] = 49;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[34])){ goto RULE_93; }
conclusion.atoms[6] = 40;
if(!Term_OverrideSubterm(&conclusion,7,&substitutions[32])){ goto RULE_93; }
conclusion.atoms[8] = 40;
if(!Term_OverrideSubterm(&conclusion,9,&substitutions[33])){ goto RULE_93; }
conclusion.atoms[10] = 40;
Truth conclusionTruth = Truth_FrequencyGreater(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_93:
{
if(!doublePremise) { goto RULE_94; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_94; }
if(term1.atoms[1] != 41){ goto RULE_94; }
if(term1.atoms[2] != 57){ goto RULE_94; }
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_94; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_94; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_94; }
substitutions[34] = subtree;
if(term1.atoms[6] != 40){ goto RULE_94; }
if(term2.atoms[0] != 45){ goto RULE_94; }
if(term2.atoms[1] != 41){ goto RULE_94; }
if(term2.atoms[2] != 57){ goto RULE_94; }
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_94; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_94; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_94; }
substitutions[34] = subtree;
if(term2.atoms[6] != 40){ goto RULE_94; }
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 41;
conclusion.atoms[2] = 57;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[28])){ goto RULE_94; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[30])){ goto RULE_94; }
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[34])){ goto RULE_94; }
conclusion.atoms[6] = 40;
Truth conclusionTruth = Truth_Deduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_94:
{
if(!doublePremise) { goto RULE_95; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_95; }
if(term1.atoms[1] != 41){ goto RULE_95; }
if(term1.atoms[2] != 57){ goto RULE_95; }
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_95; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_95; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_95; }
substitutions[34] = subtree;
if(term1.atoms[6] != 40){ goto RULE_95; }
if(term2.atoms[0] != 45){ goto RULE_95; }
if(term2.atoms[1] != 41){ goto RULE_95; }
if(term2.atoms[2] != 57){ goto RULE_95; }
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_95; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_95; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_95; }
substitutions[34] = subtree;
if(term2.atoms[6] != 40){ goto RULE_95; }
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 41;
conclusion.atoms[2] = 57;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[28])){ goto RULE_95; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[30])){ goto RULE_95; }
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[34])){ goto RULE_95; }
conclusion.atoms[6] = 40;
Truth conclusionTruth = Truth_Deduction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_95:
{
if(!doublePremise) { goto RULE_96; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 62){ goto RULE_96; }
if(term1.atoms[1] != 49){ goto RULE_96; }
if(term1.atoms[2] != 48){ goto RULE_96; }
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_96; }
substitutions[32] = subtree;
if(term1.atoms[4] != 40){ goto RULE_96; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_96; }
substitutions[34] = subtree;
if(term1.atoms[6] != 40){ goto RULE_96; }
if(term2.atoms[0] != 62){ goto RULE_96; }
if(term2.atoms[1] != 49){ goto RULE_96; }
if(term2.atoms[2] != 48){ goto RULE_96; }
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_96; }
substitutions[33] = subtree;
if(term2.atoms[4] != 40){ goto RULE_96; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_96; }
substitutions[34] = subtree;
if(term2.atoms[6] != 40){ goto RULE_96; }
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 41;
conclusion.atoms[2] = 46;
conclusion.atoms[3] = 49;
conclusion.atoms[4] = 49;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[34])){ goto RULE_96; }
conclusion.atoms[6] = 40;
if(!Term_OverrideSubterm(&conclusion,7,&substitutions[32])){ goto RULE_96; }
conclusion.atoms[8] = 40;
if(!Term_OverrideSubterm(&conclusion,9,&substitutions[33])){ goto RULE_96; }
conclusion.atoms[10] = 40;
Truth conclusionTruth = Truth_FrequencyEqual(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_96:
{
if(!doublePremise) { goto RULE_97; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 62){ goto RULE_97; }
if(term1.atoms[1] != 49){ goto RULE_97; }
if(term1.atoms[2] != 48){ goto RULE_97; }
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_97; }
substitutions[33] = subtree;
if(term1.atoms[4] != 40){ goto RULE_97; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_97; }
substitutions[34] = subtree;
if(term1.atoms[6] != 40){ goto RULE_97; }
if(term2.atoms[0] != 62){ goto RULE_97; }
if(term2.atoms[1] != 49){ goto RULE_97; }
if(term2.atoms[2] != 48){ goto RULE_97; }
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_97; }
substitutions[32] = subtree;
if(term2.atoms[4] != 40){ goto RULE_97; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_97; }
substitutions[34] = subtree;
if(term2.atoms[6] != 40){ goto RULE_97; }
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 41;
conclusion.atoms[2] = 46;
conclusion.atoms[3] = 49;
conclusion.atoms[4] = 49;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[34])){ goto RULE_97; }
conclusion.atoms[6] = 40;
if(!Term_OverrideSubterm(&conclusion,7,&substitutions[32])){ goto RULE_97; }
conclusion.atoms[8] = 40;
if(!Term_OverrideSubterm(&conclusion,9,&substitutions[33])){ goto RULE_97; }
conclusion.atoms[10] = 40;
Truth conclusionTruth = Truth_FrequencyEqual(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_97:
{
if(!doublePremise) { goto RULE_98; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_98; }
if(term1.atoms[1] != 41){ goto RULE_98; }
if(term1.atoms[2] != 46){ goto RULE_98; }
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_98; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_98; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_98; }
substitutions[34] = subtree;
if(term1.atoms[6] != 40){ goto RULE_98; }
if(term2.atoms[0] != 45){ goto RULE_98; }
if(term2.atoms[1] != 41){ goto RULE_98; }
if(term2.atoms[2] != 46){ goto RULE_98; }
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_98; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_98; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_98; }
substitutions[34] = subtree;
if(term2.atoms[6] != 40){ goto RULE_98; }
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 41;
conclusion.atoms[2] = 46;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[28])){ goto RULE_98; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[30])){ goto RULE_98; }
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[34])){ goto RULE_98; }
conclusion.atoms[6] = 40;
Truth conclusionTruth = Truth_Deduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_98:
{
if(!doublePremise) { goto RULE_99; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_99; }
if(term1.atoms[1] != 41){ goto RULE_99; }
if(term1.atoms[2] != 46){ goto RULE_99; }
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_99; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_99; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_99; }
substitutions[34] = subtree;
if(term1.atoms[6] != 40){ goto RULE_99; }
if(term2.atoms[0] != 45){ goto RULE_99; }
if(term2.atoms[1] != 41){ goto RULE_99; }
if(term2.atoms[2] != 46){ goto RULE_99; }
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_99; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_99; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_99; }
substitutions[34] = subtree;
if(term2.atoms[6] != 40){ goto RULE_99; }
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 41;
conclusion.atoms[2] = 46;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[28])){ goto RULE_99; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[30])){ goto RULE_99; }
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[34])){ goto RULE_99; }
conclusion.atoms[6] = 40;
Truth conclusionTruth = Truth_Deduction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_99:
{
if(doublePremise) { goto RULE_100; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_100; }
if(term1.atoms[1] != 41){ goto RULE_100; }
if(term1.atoms[2] != 46){ goto RULE_100; }
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_100; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_100; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_100; }
substitutions[34] = subtree;
if(term1.atoms[6] != 40){ goto RULE_100; }
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 41;
conclusion.atoms[2] = 46;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[29])){ goto RULE_100; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[28])){ goto RULE_100; }
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[34])){ goto RULE_100; }
conclusion.atoms[6] = 40;
Truth conclusionTruth = Truth_StructuralIntersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_100:
{
if(!doublePremise) { goto RULE_101; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_101; }
if(term1.atoms[1] != 41){ goto RULE_101; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_101; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_101; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_101; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_101; }
if(term2.atoms[1] != 41){ goto RULE_101; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_101; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_101; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_101; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[30])){ goto RULE_101; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[28])){ goto RULE_101; }
Truth conclusionTruth = Truth_Abduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_101:
{
if(!doublePremise) { goto RULE_102; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_102; }
if(term1.atoms[1] != 41){ goto RULE_102; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_102; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_102; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_102; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_102; }
if(term2.atoms[1] != 41){ goto RULE_102; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_102; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_102; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_102; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[30])){ goto RULE_102; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[28])){ goto RULE_102; }
Truth conclusionTruth = Truth_Abduction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_102:
{
if(!doublePremise) { goto RULE_103; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_103; }
if(term1.atoms[1] != 41){ goto RULE_103; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_103; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_103; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_103; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_103; }
if(term2.atoms[1] != 41){ goto RULE_103; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_103; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_103; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_103; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[30])){ goto RULE_103; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[29])){ goto RULE_103; }
Truth conclusionTruth = Truth_Abduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_103:
{
if(!doublePremise) { goto RULE_104; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_104; }
if(term1.atoms[1] != 41){ goto RULE_104; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_104; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_104; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_104; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_104; }
if(term2.atoms[1] != 41){ goto RULE_104; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_104; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_104; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_104; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[30])){ goto RULE_104; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[29])){ goto RULE_104; }
Truth conclusionTruth = Truth_Abduction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_104:
{
if(!doublePremise) { goto RULE_105; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_105; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_105; }
substitutions[32] = subtree;
if(term1.atoms[2] != 41){ goto RULE_105; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_105; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_105; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_105; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_105; }
substitutions[32] = subtree;
if(term2.atoms[2] != 41){ goto RULE_105; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_105; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_105; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[30])){ goto RULE_105; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[28])){ goto RULE_105; }
Truth conclusionTruth = Truth_Induction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_105:
{
if(!doublePremise) { goto RULE_106; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_106; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_106; }
substitutions[32] = subtree;
if(term1.atoms[2] != 41){ goto RULE_106; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_106; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_106; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_106; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_106; }
substitutions[32] = subtree;
if(term2.atoms[2] != 41){ goto RULE_106; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_106; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_106; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[30])){ goto RULE_106; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[28])){ goto RULE_106; }
Truth conclusionTruth = Truth_Induction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_106:
{
if(!doublePremise) { goto RULE_107; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_107; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_107; }
substitutions[32] = subtree;
if(term1.atoms[2] != 41){ goto RULE_107; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_107; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_107; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_107; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_107; }
substitutions[32] = subtree;
if(term2.atoms[2] != 41){ goto RULE_107; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_107; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 6);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_107; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[30])){ goto RULE_107; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[29])){ goto RULE_107; }
Truth conclusionTruth = Truth_Induction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_107:
{
if(!doublePremise) { goto RULE_108; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_108; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_108; }
substitutions[32] = subtree;
if(term1.atoms[2] != 41){ goto RULE_108; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_108; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_108; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_108; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_108; }
substitutions[32] = subtree;
if(term2.atoms[2] != 41){ goto RULE_108; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_108; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_108; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[30])){ goto RULE_108; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[29])){ goto RULE_108; }
Truth conclusionTruth = Truth_Induction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_108:
{
if(!doublePremise) { goto RULE_109; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_109; }
if(term1.atoms[1] != 41){ goto RULE_109; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_109; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_109; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_109; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_109; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_109; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_109; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 41;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[32])){ goto RULE_109; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[30])){ goto RULE_109; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_109; }
Truth conclusionTruth = Truth_Deduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_109:
{
if(!doublePremise) { goto RULE_110; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_110; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_110; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_110; }
substitutions[28] = subtree;
if(term2.atoms[0] != 45){ goto RULE_110; }
if(term2.atoms[1] != 41){ goto RULE_110; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_110; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_110; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_110; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 41;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[32])){ goto RULE_110; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[30])){ goto RULE_110; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_110; }
Truth conclusionTruth = Truth_Deduction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_110:
{
if(!doublePremise) { goto RULE_111; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_111; }
if(term1.atoms[1] != 41){ goto RULE_111; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_111; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_111; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_111; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_111; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_111; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_111; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 41;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[32])){ goto RULE_111; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[30])){ goto RULE_111; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_111; }
Truth conclusionTruth = Truth_Induction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_111:
{
if(!doublePremise) { goto RULE_112; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_112; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_112; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_112; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_112; }
if(term2.atoms[1] != 41){ goto RULE_112; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_112; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_112; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_112; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 41;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[32])){ goto RULE_112; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[30])){ goto RULE_112; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_112; }
Truth conclusionTruth = Truth_Induction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_112:
{
if(!doublePremise) { goto RULE_113; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_113; }
if(term1.atoms[1] != 41){ goto RULE_113; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_113; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_113; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_113; }
substitutions[29] = subtree;
if(term2.atoms[0] != 46){ goto RULE_113; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_113; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_113; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 41;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[32])){ goto RULE_113; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[30])){ goto RULE_113; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_113; }
Truth conclusionTruth = Truth_Analogy(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_113:
{
if(!doublePremise) { goto RULE_114; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 46){ goto RULE_114; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_114; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_114; }
substitutions[28] = subtree;
if(term2.atoms[0] != 45){ goto RULE_114; }
if(term2.atoms[1] != 41){ goto RULE_114; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_114; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_114; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_114; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 41;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[32])){ goto RULE_114; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[30])){ goto RULE_114; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_114; }
Truth conclusionTruth = Truth_Analogy(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_114:
{
if(!doublePremise) { goto RULE_115; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_115; }
if(term1.atoms[1] != 41){ goto RULE_115; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_115; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_115; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_115; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_115; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_115; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_115; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 41;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[32])){ goto RULE_115; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[28])){ goto RULE_115; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[30])){ goto RULE_115; }
Truth conclusionTruth = Truth_Deduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_115:
{
if(!doublePremise) { goto RULE_116; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_116; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_116; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_116; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_116; }
if(term2.atoms[1] != 41){ goto RULE_116; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_116; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_116; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_116; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 41;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[32])){ goto RULE_116; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[28])){ goto RULE_116; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[30])){ goto RULE_116; }
Truth conclusionTruth = Truth_Deduction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_116:
{
if(!doublePremise) { goto RULE_117; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_117; }
if(term1.atoms[1] != 41){ goto RULE_117; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_117; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_117; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_117; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_117; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_117; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_117; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 41;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[32])){ goto RULE_117; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[28])){ goto RULE_117; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[30])){ goto RULE_117; }
Truth conclusionTruth = Truth_Induction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_117:
{
if(!doublePremise) { goto RULE_118; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_118; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_118; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_118; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_118; }
if(term2.atoms[1] != 41){ goto RULE_118; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_118; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_118; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_118; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 41;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[32])){ goto RULE_118; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[28])){ goto RULE_118; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[30])){ goto RULE_118; }
Truth conclusionTruth = Truth_Induction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_118:
{
if(!doublePremise) { goto RULE_119; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_119; }
if(term1.atoms[1] != 41){ goto RULE_119; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_119; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_119; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_119; }
substitutions[29] = subtree;
if(term2.atoms[0] != 46){ goto RULE_119; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_119; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_119; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 41;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[32])){ goto RULE_119; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[28])){ goto RULE_119; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[30])){ goto RULE_119; }
Truth conclusionTruth = Truth_Analogy(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_119:
{
if(!doublePremise) { goto RULE_120; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 46){ goto RULE_120; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_120; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_120; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_120; }
if(term2.atoms[1] != 41){ goto RULE_120; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_120; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_120; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_120; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 41;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[32])){ goto RULE_120; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[28])){ goto RULE_120; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[30])){ goto RULE_120; }
Truth conclusionTruth = Truth_Analogy(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_120:
{
if(!doublePremise) { goto RULE_121; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_121; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_121; }
substitutions[32] = subtree;
if(term1.atoms[2] != 41){ goto RULE_121; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_121; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_121; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_121; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_121; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_121; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[32])){ goto RULE_121; }
conclusion.atoms[2] = 41;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[30])){ goto RULE_121; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[29])){ goto RULE_121; }
Truth conclusionTruth = Truth_Deduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_121:
{
if(!doublePremise) { goto RULE_122; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_122; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_122; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_122; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_122; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_122; }
substitutions[32] = subtree;
if(term2.atoms[2] != 41){ goto RULE_122; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_122; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_122; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[32])){ goto RULE_122; }
conclusion.atoms[2] = 41;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[30])){ goto RULE_122; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[29])){ goto RULE_122; }
Truth conclusionTruth = Truth_Deduction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_122:
{
if(!doublePremise) { goto RULE_123; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_123; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_123; }
substitutions[32] = subtree;
if(term1.atoms[2] != 41){ goto RULE_123; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_123; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_123; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_123; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_123; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_123; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[32])){ goto RULE_123; }
conclusion.atoms[2] = 41;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[30])){ goto RULE_123; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[29])){ goto RULE_123; }
Truth conclusionTruth = Truth_Abduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_123:
{
if(!doublePremise) { goto RULE_124; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_124; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_124; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_124; }
substitutions[28] = subtree;
if(term2.atoms[0] != 45){ goto RULE_124; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_124; }
substitutions[32] = subtree;
if(term2.atoms[2] != 41){ goto RULE_124; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_124; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_124; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[32])){ goto RULE_124; }
conclusion.atoms[2] = 41;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[30])){ goto RULE_124; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[29])){ goto RULE_124; }
Truth conclusionTruth = Truth_Abduction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_124:
{
if(!doublePremise) { goto RULE_125; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_125; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_125; }
substitutions[32] = subtree;
if(term1.atoms[2] != 41){ goto RULE_125; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_125; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_125; }
substitutions[29] = subtree;
if(term2.atoms[0] != 46){ goto RULE_125; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_125; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_125; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[32])){ goto RULE_125; }
conclusion.atoms[2] = 41;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[30])){ goto RULE_125; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[29])){ goto RULE_125; }
Truth conclusionTruth = Truth_Analogy(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_125:
{
if(!doublePremise) { goto RULE_126; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 46){ goto RULE_126; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_126; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_126; }
substitutions[28] = subtree;
if(term2.atoms[0] != 45){ goto RULE_126; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_126; }
substitutions[32] = subtree;
if(term2.atoms[2] != 41){ goto RULE_126; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_126; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_126; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[32])){ goto RULE_126; }
conclusion.atoms[2] = 41;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[30])){ goto RULE_126; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[29])){ goto RULE_126; }
Truth conclusionTruth = Truth_Analogy(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_126:
{
if(!doublePremise) { goto RULE_127; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_127; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_127; }
substitutions[32] = subtree;
if(term1.atoms[2] != 41){ goto RULE_127; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_127; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_127; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_127; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_127; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_127; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[32])){ goto RULE_127; }
conclusion.atoms[2] = 41;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_127; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[30])){ goto RULE_127; }
Truth conclusionTruth = Truth_Deduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_127:
{
if(!doublePremise) { goto RULE_128; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_128; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_128; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_128; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_128; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_128; }
substitutions[32] = subtree;
if(term2.atoms[2] != 41){ goto RULE_128; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_128; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_128; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[32])){ goto RULE_128; }
conclusion.atoms[2] = 41;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_128; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[30])){ goto RULE_128; }
Truth conclusionTruth = Truth_Deduction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_128:
{
if(!doublePremise) { goto RULE_129; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_129; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_129; }
substitutions[32] = subtree;
if(term1.atoms[2] != 41){ goto RULE_129; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_129; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_129; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_129; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_129; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_129; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[32])){ goto RULE_129; }
conclusion.atoms[2] = 41;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_129; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[30])){ goto RULE_129; }
Truth conclusionTruth = Truth_Abduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_129:
{
if(!doublePremise) { goto RULE_130; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_130; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_130; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_130; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_130; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_130; }
substitutions[32] = subtree;
if(term2.atoms[2] != 41){ goto RULE_130; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_130; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_130; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[32])){ goto RULE_130; }
conclusion.atoms[2] = 41;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_130; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[30])){ goto RULE_130; }
Truth conclusionTruth = Truth_Abduction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_130:
{
if(!doublePremise) { goto RULE_131; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_131; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_131; }
substitutions[32] = subtree;
if(term1.atoms[2] != 41){ goto RULE_131; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_131; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_131; }
substitutions[29] = subtree;
if(term2.atoms[0] != 46){ goto RULE_131; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_131; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_131; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[32])){ goto RULE_131; }
conclusion.atoms[2] = 41;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_131; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[30])){ goto RULE_131; }
Truth conclusionTruth = Truth_Analogy(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_131:
{
if(!doublePremise) { goto RULE_132; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 46){ goto RULE_132; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_132; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_132; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_132; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_132; }
substitutions[32] = subtree;
if(term2.atoms[2] != 41){ goto RULE_132; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_132; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_132; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[32])){ goto RULE_132; }
conclusion.atoms[2] = 41;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_132; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[30])){ goto RULE_132; }
Truth conclusionTruth = Truth_Analogy(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_132:
{
if(!doublePremise) { goto RULE_133; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_133; }
if(term1.atoms[1] != 41){ goto RULE_133; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_133; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_133; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_133; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_133; }
if(term2.atoms[1] != 41){ goto RULE_133; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_133; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_133; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_133; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 46;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[28])){ goto RULE_133; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[30])){ goto RULE_133; }
Truth conclusionTruth = Truth_Comparison(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_133:
{
if(!doublePremise) { goto RULE_134; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_134; }
if(term1.atoms[1] != 41){ goto RULE_134; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_134; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_134; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_134; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_134; }
if(term2.atoms[1] != 41){ goto RULE_134; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_134; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_134; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_134; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 46;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[28])){ goto RULE_134; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[30])){ goto RULE_134; }
Truth conclusionTruth = Truth_Comparison(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_134:
{
if(!doublePremise) { goto RULE_135; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_135; }
if(term1.atoms[1] != 41){ goto RULE_135; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_135; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_135; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_135; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_135; }
if(term2.atoms[1] != 41){ goto RULE_135; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_135; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_135; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_135; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 46;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[29])){ goto RULE_135; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[30])){ goto RULE_135; }
Truth conclusionTruth = Truth_Comparison(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_135:
{
if(!doublePremise) { goto RULE_136; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_136; }
if(term1.atoms[1] != 41){ goto RULE_136; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_136; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_136; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_136; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_136; }
if(term2.atoms[1] != 41){ goto RULE_136; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_136; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_136; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_136; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 46;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[29])){ goto RULE_136; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[30])){ goto RULE_136; }
Truth conclusionTruth = Truth_Comparison(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_136:
{
if(!doublePremise) { goto RULE_137; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_137; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_137; }
substitutions[32] = subtree;
if(term1.atoms[2] != 41){ goto RULE_137; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_137; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_137; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_137; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_137; }
substitutions[32] = subtree;
if(term2.atoms[2] != 41){ goto RULE_137; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_137; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_137; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 46;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[28])){ goto RULE_137; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[30])){ goto RULE_137; }
Truth conclusionTruth = Truth_Comparison(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_137:
{
if(!doublePremise) { goto RULE_138; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_138; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_138; }
substitutions[32] = subtree;
if(term1.atoms[2] != 41){ goto RULE_138; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_138; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_138; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_138; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_138; }
substitutions[32] = subtree;
if(term2.atoms[2] != 41){ goto RULE_138; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_138; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_138; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 46;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[28])){ goto RULE_138; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[30])){ goto RULE_138; }
Truth conclusionTruth = Truth_Comparison(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_138:
{
if(!doublePremise) { goto RULE_139; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_139; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_139; }
substitutions[32] = subtree;
if(term1.atoms[2] != 41){ goto RULE_139; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_139; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_139; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_139; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_139; }
substitutions[32] = subtree;
if(term2.atoms[2] != 41){ goto RULE_139; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_139; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 6);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_139; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 46;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[29])){ goto RULE_139; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[30])){ goto RULE_139; }
Truth conclusionTruth = Truth_Comparison(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_139:
{
if(!doublePremise) { goto RULE_140; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_140; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_140; }
substitutions[32] = subtree;
if(term1.atoms[2] != 41){ goto RULE_140; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_140; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_140; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_140; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_140; }
substitutions[32] = subtree;
if(term2.atoms[2] != 41){ goto RULE_140; }
subtree = Term_ExtractSubterm(&term2, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_140; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 6);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_140; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 46;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[29])){ goto RULE_140; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[30])){ goto RULE_140; }
Truth conclusionTruth = Truth_Comparison(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_140:
{
if(doublePremise) { goto RULE_141; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 58){ goto RULE_141; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_141; }
substitutions[28] = subtree;
if(term1.atoms[2] != 40){ goto RULE_141; }
Term conclusion = {0};
if(!Term_OverrideSubterm(&conclusion,0,&substitutions[28])){ goto RULE_141; }
Truth conclusionTruth = Truth_Negation(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_141:
{
if(doublePremise) { goto RULE_142; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 44){ goto RULE_142; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_142; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_142; }
substitutions[29] = subtree;
Term conclusion = {0};
if(!Term_OverrideSubterm(&conclusion,0,&substitutions[28])){ goto RULE_142; }
Truth conclusionTruth = Truth_StructuralDeduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_142:
{
if(doublePremise) { goto RULE_143; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 44){ goto RULE_143; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_143; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_143; }
substitutions[29] = subtree;
Term conclusion = {0};
if(!Term_OverrideSubterm(&conclusion,0,&substitutions[29])){ goto RULE_143; }
Truth conclusionTruth = Truth_StructuralDeduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_143:
{
if(doublePremise) { goto RULE_144; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 44){ goto RULE_144; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_144; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_144; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 44;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[29])){ goto RULE_144; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[28])){ goto RULE_144; }
Truth conclusionTruth = Truth_StructuralIntersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_144:
{
if(!doublePremise) { goto RULE_145; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
subtree = Term_ExtractSubterm(&term1, 0);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_145; }
substitutions[33] = subtree;
if(term2.atoms[0] != 44){ goto RULE_145; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_145; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_145; }
substitutions[28] = subtree;
Term conclusion = {0};
if(!Term_OverrideSubterm(&conclusion,0,&substitutions[28])){ goto RULE_145; }
Truth conclusionTruth = Truth_DecomposePNN(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_145:
{
if(!doublePremise) { goto RULE_146; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 44){ goto RULE_146; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_146; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_146; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 0);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_146; }
substitutions[33] = subtree;
Term conclusion = {0};
if(!Term_OverrideSubterm(&conclusion,0,&substitutions[28])){ goto RULE_146; }
Truth conclusionTruth = Truth_DecomposePNN(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_146:
{
if(!doublePremise) { goto RULE_147; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
subtree = Term_ExtractSubterm(&term1, 0);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_147; }
substitutions[33] = subtree;
if(term2.atoms[0] != 61){ goto RULE_147; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_147; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_147; }
substitutions[28] = subtree;
Term conclusion = {0};
if(!Term_OverrideSubterm(&conclusion,0,&substitutions[28])){ goto RULE_147; }
Truth conclusionTruth = Truth_DecomposeNPP(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_147:
{
if(!doublePremise) { goto RULE_148; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 61){ goto RULE_148; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_148; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_148; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 0);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_148; }
substitutions[33] = subtree;
Term conclusion = {0};
if(!Term_OverrideSubterm(&conclusion,0,&substitutions[28])){ goto RULE_148; }
Truth conclusionTruth = Truth_DecomposeNPP(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_148:
{
if(!doublePremise) { goto RULE_149; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
subtree = Term_ExtractSubterm(&term1, 0);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_149; }
substitutions[33] = subtree;
if(term2.atoms[0] != 44){ goto RULE_149; }
if(term2.atoms[1] != 58){ goto RULE_149; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_149; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_149; }
substitutions[33] = subtree;
if(term2.atoms[4] != 40){ goto RULE_149; }
Term conclusion = {0};
if(!Term_OverrideSubterm(&conclusion,0,&substitutions[28])){ goto RULE_149; }
Truth conclusionTruth = Truth_DecomposeNNN(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_149:
{
if(!doublePremise) { goto RULE_150; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 44){ goto RULE_150; }
if(term1.atoms[1] != 58){ goto RULE_150; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_150; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_150; }
substitutions[33] = subtree;
if(term1.atoms[4] != 40){ goto RULE_150; }
subtree = Term_ExtractSubterm(&term2, 0);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_150; }
substitutions[33] = subtree;
Term conclusion = {0};
if(!Term_OverrideSubterm(&conclusion,0,&substitutions[28])){ goto RULE_150; }
Truth conclusionTruth = Truth_DecomposeNNN(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_150:
{
if(!doublePremise) { goto RULE_151; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
subtree = Term_ExtractSubterm(&term1, 0);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_151; }
substitutions[33] = subtree;
if(term2.atoms[0] != 61){ goto RULE_151; }
if(term2.atoms[1] != 58){ goto RULE_151; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_151; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_151; }
substitutions[33] = subtree;
if(term2.atoms[4] != 40){ goto RULE_151; }
Term conclusion = {0};
if(!Term_OverrideSubterm(&conclusion,0,&substitutions[28])){ goto RULE_151; }
Truth conclusionTruth = Truth_DecomposePPP(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_151:
{
if(!doublePremise) { goto RULE_152; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 61){ goto RULE_152; }
if(term1.atoms[1] != 58){ goto RULE_152; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_152; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_152; }
substitutions[33] = subtree;
if(term1.atoms[4] != 40){ goto RULE_152; }
subtree = Term_ExtractSubterm(&term2, 0);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_152; }
substitutions[33] = subtree;
Term conclusion = {0};
if(!Term_OverrideSubterm(&conclusion,0,&substitutions[28])){ goto RULE_152; }
Truth conclusionTruth = Truth_DecomposePPP(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_152:
{
if(!doublePremise) { goto RULE_153; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_153; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_153; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_153; }
substitutions[31] = subtree;
if(term2.atoms[0] != 59){ goto RULE_153; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_153; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_153; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_153; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_153; }
Truth conclusionTruth = Truth_Deduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_153:
{
if(!doublePremise) { goto RULE_154; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_154; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_154; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_154; }
substitutions[34] = subtree;
if(term2.atoms[0] != 59){ goto RULE_154; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_154; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_154; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_154; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_154; }
Truth conclusionTruth = Truth_Deduction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_154:
{
if(!doublePremise) { goto RULE_155; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_155; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_155; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_155; }
substitutions[29] = subtree;
if(term2.atoms[0] != 59){ goto RULE_155; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_155; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_155; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[30])){ goto RULE_155; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[29])){ goto RULE_155; }
Truth conclusionTruth = Truth_Induction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_155:
{
if(!doublePremise) { goto RULE_156; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_156; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_156; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_156; }
substitutions[30] = subtree;
if(term2.atoms[0] != 59){ goto RULE_156; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_156; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_156; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[30])){ goto RULE_156; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[29])){ goto RULE_156; }
Truth conclusionTruth = Truth_Induction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_156:
{
if(!doublePremise) { goto RULE_157; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_157; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_157; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_157; }
substitutions[30] = subtree;
if(term2.atoms[0] != 59){ goto RULE_157; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_157; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_157; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[29])){ goto RULE_157; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[28])){ goto RULE_157; }
Truth conclusionTruth = Truth_Abduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_157:
{
if(!doublePremise) { goto RULE_158; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_158; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_158; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_158; }
substitutions[30] = subtree;
if(term2.atoms[0] != 59){ goto RULE_158; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_158; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_158; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[29])){ goto RULE_158; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[28])){ goto RULE_158; }
Truth conclusionTruth = Truth_Abduction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_158:
{
if(!doublePremise) { goto RULE_159; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_159; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_159; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_159; }
substitutions[29] = subtree;
if(term2.atoms[0] != 59){ goto RULE_159; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_159; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_159; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[30])){ goto RULE_159; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[28])){ goto RULE_159; }
Truth conclusionTruth = Truth_Exemplification(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_159:
{
if(!doublePremise) { goto RULE_160; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_160; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_160; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_160; }
substitutions[30] = subtree;
if(term2.atoms[0] != 59){ goto RULE_160; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_160; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_160; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[30])){ goto RULE_160; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[28])){ goto RULE_160; }
Truth conclusionTruth = Truth_Exemplification(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_160:
{
if(!doublePremise) { goto RULE_161; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_161; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_161; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_161; }
substitutions[30] = subtree;
if(term2.atoms[0] != 59){ goto RULE_161; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_161; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_161; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 44;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[30])){ goto RULE_161; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[28])){ goto RULE_161; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_161; }
Truth conclusionTruth = Truth_Union(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_161:
{
if(!doublePremise) { goto RULE_162; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_162; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_162; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_162; }
substitutions[30] = subtree;
if(term2.atoms[0] != 59){ goto RULE_162; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_162; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_162; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 44;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[30])){ goto RULE_162; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[28])){ goto RULE_162; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_162; }
Truth conclusionTruth = Truth_Union(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_162:
{
if(!doublePremise) { goto RULE_163; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_163; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_163; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_163; }
substitutions[30] = subtree;
if(term2.atoms[0] != 59){ goto RULE_163; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_163; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_163; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 61;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[30])){ goto RULE_163; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[28])){ goto RULE_163; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_163; }
Truth conclusionTruth = Truth_Intersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_163:
{
if(!doublePremise) { goto RULE_164; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_164; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_164; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_164; }
substitutions[30] = subtree;
if(term2.atoms[0] != 59){ goto RULE_164; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_164; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_164; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 61;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[30])){ goto RULE_164; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[28])){ goto RULE_164; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_164; }
Truth conclusionTruth = Truth_Intersection(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_164:
{
if(!doublePremise) { goto RULE_165; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_165; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_165; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_165; }
substitutions[28] = subtree;
if(term2.atoms[0] != 59){ goto RULE_165; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_165; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_165; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[30])){ goto RULE_165; }
conclusion.atoms[2] = 44;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_165; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[29])){ goto RULE_165; }
Truth conclusionTruth = Truth_Intersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_165:
{
if(!doublePremise) { goto RULE_166; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_166; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_166; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_166; }
substitutions[29] = subtree;
if(term2.atoms[0] != 59){ goto RULE_166; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_166; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_166; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[30])){ goto RULE_166; }
conclusion.atoms[2] = 44;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_166; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[29])){ goto RULE_166; }
Truth conclusionTruth = Truth_Intersection(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_166:
{
if(!doublePremise) { goto RULE_167; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_167; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_167; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_167; }
substitutions[28] = subtree;
if(term2.atoms[0] != 59){ goto RULE_167; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_167; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_167; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[30])){ goto RULE_167; }
conclusion.atoms[2] = 61;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_167; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[29])){ goto RULE_167; }
Truth conclusionTruth = Truth_Union(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_167:
{
if(!doublePremise) { goto RULE_168; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_168; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_168; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_168; }
substitutions[29] = subtree;
if(term2.atoms[0] != 59){ goto RULE_168; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_168; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_168; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[30])){ goto RULE_168; }
conclusion.atoms[2] = 61;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_168; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[29])){ goto RULE_168; }
Truth conclusionTruth = Truth_Union(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_168:
{
if(!doublePremise) { goto RULE_169; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_169; }
if(term1.atoms[1] != 44){ goto RULE_169; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_169; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_169; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_169; }
substitutions[34] = subtree;
if(term2.atoms[0] != 59){ goto RULE_169; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_169; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_169; }
substitutions[31] = subtree;
Term conclusion = {0};
if(!Term_OverrideSubterm(&conclusion,0,&substitutions[34])){ goto RULE_169; }
Truth conclusionTruth = Truth_Abduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_169:
{
if(!doublePremise) { goto RULE_170; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_170; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_170; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_170; }
substitutions[31] = subtree;
if(term2.atoms[0] != 59){ goto RULE_170; }
if(term2.atoms[1] != 44){ goto RULE_170; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_170; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_170; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_170; }
substitutions[34] = subtree;
Term conclusion = {0};
if(!Term_OverrideSubterm(&conclusion,0,&substitutions[34])){ goto RULE_170; }
Truth conclusionTruth = Truth_Abduction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_170:
{
if(!doublePremise) { goto RULE_171; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_171; }
if(term1.atoms[1] != 44){ goto RULE_171; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_171; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_171; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_171; }
substitutions[31] = subtree;
if(term2.atoms[0] != 59){ goto RULE_171; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_171; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_171; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 44;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_171; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[30])){ goto RULE_171; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[33])){ goto RULE_171; }
Truth conclusionTruth = Truth_Deduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_171:
{
if(!doublePremise) { goto RULE_172; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_172; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_172; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_172; }
substitutions[31] = subtree;
if(term2.atoms[0] != 59){ goto RULE_172; }
if(term2.atoms[1] != 44){ goto RULE_172; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_172; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_172; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_172; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 44;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_172; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[30])){ goto RULE_172; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[33])){ goto RULE_172; }
Truth conclusionTruth = Truth_Deduction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_172:
{
if(!doublePremise) { goto RULE_173; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_173; }
if(term1.atoms[1] != 44){ goto RULE_173; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_173; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_173; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_173; }
substitutions[34] = subtree;
if(term2.atoms[0] != 59){ goto RULE_173; }
if(term2.atoms[1] != 44){ goto RULE_173; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_173; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_173; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_173; }
substitutions[33] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_173; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_173; }
Truth conclusionTruth = Truth_Abduction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_173:
{
if(!doublePremise) { goto RULE_174; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_174; }
if(term1.atoms[1] != 44){ goto RULE_174; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_174; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_174; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_174; }
substitutions[33] = subtree;
if(term2.atoms[0] != 59){ goto RULE_174; }
if(term2.atoms[1] != 44){ goto RULE_174; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_174; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_174; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_174; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_174; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_174; }
Truth conclusionTruth = Truth_Abduction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_174:
{
if(!doublePremise) { goto RULE_175; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_175; }
if(term1.atoms[1] != 44){ goto RULE_175; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_175; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_175; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_175; }
substitutions[31] = subtree;
if(term2.atoms[0] != 59){ goto RULE_175; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_175; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_175; }
substitutions[33] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 44;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_175; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[30])){ goto RULE_175; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[33])){ goto RULE_175; }
Truth conclusionTruth = Truth_Induction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_175:
{
if(!doublePremise) { goto RULE_176; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_176; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_176; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_176; }
substitutions[33] = subtree;
if(term2.atoms[0] != 59){ goto RULE_176; }
if(term2.atoms[1] != 44){ goto RULE_176; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_176; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_176; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_176; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 44;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_176; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[30])){ goto RULE_176; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[33])){ goto RULE_176; }
Truth conclusionTruth = Truth_Induction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_176:
{
if(doublePremise) { goto RULE_177; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 60){ goto RULE_177; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_177; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_177; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 60;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[34])){ goto RULE_177; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[33])){ goto RULE_177; }
Truth conclusionTruth = Truth_StructuralIntersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_177:
{
if(!doublePremise) { goto RULE_178; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_178; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_178; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_178; }
substitutions[34] = subtree;
if(term2.atoms[0] != 59){ goto RULE_178; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_178; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_178; }
substitutions[33] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 60;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_178; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_178; }
Truth conclusionTruth = Truth_Intersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_178:
{
if(!doublePremise) { goto RULE_179; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_179; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_179; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_179; }
substitutions[33] = subtree;
if(term2.atoms[0] != 59){ goto RULE_179; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_179; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_179; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 60;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_179; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_179; }
Truth conclusionTruth = Truth_Intersection(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_179:
{
if(!doublePremise) { goto RULE_180; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_180; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_180; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_180; }
substitutions[31] = subtree;
if(term2.atoms[0] != 59){ goto RULE_180; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_180; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_180; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 60;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_180; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_180; }
Truth conclusionTruth = Truth_Comparison(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_180:
{
if(!doublePremise) { goto RULE_181; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_181; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_181; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_181; }
substitutions[31] = subtree;
if(term2.atoms[0] != 59){ goto RULE_181; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_181; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_181; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 60;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_181; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_181; }
Truth conclusionTruth = Truth_Comparison(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_181:
{
if(!doublePremise) { goto RULE_182; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_182; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_182; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_182; }
substitutions[34] = subtree;
if(term2.atoms[0] != 59){ goto RULE_182; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_182; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_182; }
substitutions[33] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 60;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_182; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_182; }
Truth conclusionTruth = Truth_Comparison(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_182:
{
if(!doublePremise) { goto RULE_183; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_183; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_183; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_183; }
substitutions[33] = subtree;
if(term2.atoms[0] != 59){ goto RULE_183; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_183; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_183; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 60;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_183; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_183; }
Truth conclusionTruth = Truth_Comparison(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_183:
{
if(!doublePremise) { goto RULE_184; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_184; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_184; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_184; }
substitutions[34] = subtree;
if(term2.atoms[0] != 60){ goto RULE_184; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_184; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_184; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_184; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_184; }
Truth conclusionTruth = Truth_Analogy(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_184:
{
if(!doublePremise) { goto RULE_185; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 60){ goto RULE_185; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_185; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_185; }
substitutions[31] = subtree;
if(term2.atoms[0] != 59){ goto RULE_185; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_185; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_185; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_185; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_185; }
Truth conclusionTruth = Truth_Analogy(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_185:
{
if(!doublePremise) { goto RULE_186; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_186; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_186; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_186; }
substitutions[31] = subtree;
if(term2.atoms[0] != 60){ goto RULE_186; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_186; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_186; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[34])){ goto RULE_186; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[33])){ goto RULE_186; }
Truth conclusionTruth = Truth_Analogy(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_186:
{
if(!doublePremise) { goto RULE_187; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 60){ goto RULE_187; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_187; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_187; }
substitutions[31] = subtree;
if(term2.atoms[0] != 59){ goto RULE_187; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_187; }
substitutions[34] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_187; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[34])){ goto RULE_187; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[33])){ goto RULE_187; }
Truth conclusionTruth = Truth_Analogy(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_187:
{
if(!doublePremise) { goto RULE_188; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 60){ goto RULE_188; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_188; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_188; }
substitutions[34] = subtree;
if(term2.atoms[0] != 60){ goto RULE_188; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_188; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_188; }
substitutions[31] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 60;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_188; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_188; }
Truth conclusionTruth = Truth_Resemblance(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_188:
{
if(!doublePremise) { goto RULE_189; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 60){ goto RULE_189; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_189; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_189; }
substitutions[31] = subtree;
if(term2.atoms[0] != 60){ goto RULE_189; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_189; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[34].atoms[0]!=0 && !Term_Equal(&substitutions[34], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_189; }
substitutions[34] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 60;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[33])){ goto RULE_189; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[34])){ goto RULE_189; }
Truth conclusionTruth = Truth_Resemblance(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_189:
{
if(!doublePremise) { goto RULE_190; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_190; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_190; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_190; }
substitutions[28] = subtree;
if(term2.atoms[0] != 45){ goto RULE_190; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_190; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_190; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 45;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[30])){ goto RULE_190; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_190; }
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[30])){ goto RULE_190; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[28])){ goto RULE_190; }
Truth conclusionTruth = Truth_Induction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_190:
{
if(!doublePremise) { goto RULE_191; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_191; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_191; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_191; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_191; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_191; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_191; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 45;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[30])){ goto RULE_191; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_191; }
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[30])){ goto RULE_191; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[28])){ goto RULE_191; }
Truth conclusionTruth = Truth_Induction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_191:
{
if(!doublePremise) { goto RULE_192; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_192; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_192; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_192; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_192; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_192; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_192; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 45;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[29])){ goto RULE_192; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[30])){ goto RULE_192; }
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_192; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[30])){ goto RULE_192; }
Truth conclusionTruth = Truth_Induction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_192:
{
if(!doublePremise) { goto RULE_193; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_193; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_193; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_193; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_193; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_193; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_193; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 45;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[29])){ goto RULE_193; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[30])){ goto RULE_193; }
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_193; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[30])){ goto RULE_193; }
Truth conclusionTruth = Truth_Induction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_193:
{
if(!doublePremise) { goto RULE_194; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_194; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_194; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_194; }
substitutions[28] = subtree;
if(term2.atoms[0] != 45){ goto RULE_194; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_194; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_194; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 60;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 45;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[30])){ goto RULE_194; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_194; }
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[30])){ goto RULE_194; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[28])){ goto RULE_194; }
Truth conclusionTruth = Truth_Comparison(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_194:
{
if(!doublePremise) { goto RULE_195; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_195; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_195; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_195; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_195; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_195; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_195; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 60;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 45;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[30])){ goto RULE_195; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_195; }
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[30])){ goto RULE_195; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[28])){ goto RULE_195; }
Truth conclusionTruth = Truth_Comparison(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_195:
{
if(!doublePremise) { goto RULE_196; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_196; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_196; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_196; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_196; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_196; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_196; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 60;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 45;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[29])){ goto RULE_196; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[30])){ goto RULE_196; }
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_196; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[30])){ goto RULE_196; }
Truth conclusionTruth = Truth_Comparison(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_196:
{
if(!doublePremise) { goto RULE_197; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_197; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_197; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_197; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_197; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_197; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_197; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 60;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 45;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[29])){ goto RULE_197; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[30])){ goto RULE_197; }
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_197; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[30])){ goto RULE_197; }
Truth conclusionTruth = Truth_Comparison(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_197:
{
if(!doublePremise) { goto RULE_198; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 58){ goto RULE_198; }
if(term1.atoms[1] != 45){ goto RULE_198; }
if(term1.atoms[2] != 40){ goto RULE_198; }
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_198; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_198; }
substitutions[28] = subtree;
if(term2.atoms[0] != 45){ goto RULE_198; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_198; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_198; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 58;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[30])){ goto RULE_198; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_198; }
conclusion.atoms[5] = 45;
conclusion.atoms[6] = 40;
if(!Term_OverrideSubterm(&conclusion,11,&substitutions[30])){ goto RULE_198; }
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[28])){ goto RULE_198; }
Truth conclusionTruth = Truth_Induction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_198:
{
if(!doublePremise) { goto RULE_199; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_199; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_199; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_199; }
substitutions[29] = subtree;
if(term2.atoms[0] != 58){ goto RULE_199; }
if(term2.atoms[1] != 45){ goto RULE_199; }
if(term2.atoms[2] != 40){ goto RULE_199; }
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_199; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_199; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 58;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[30])){ goto RULE_199; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_199; }
conclusion.atoms[5] = 45;
conclusion.atoms[6] = 40;
if(!Term_OverrideSubterm(&conclusion,11,&substitutions[30])){ goto RULE_199; }
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[28])){ goto RULE_199; }
Truth conclusionTruth = Truth_Induction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_199:
{
if(!doublePremise) { goto RULE_200; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 58){ goto RULE_200; }
if(term1.atoms[1] != 45){ goto RULE_200; }
if(term1.atoms[2] != 40){ goto RULE_200; }
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_200; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_200; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_200; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_200; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_200; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 58;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[29])){ goto RULE_200; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[30])){ goto RULE_200; }
conclusion.atoms[5] = 45;
conclusion.atoms[6] = 40;
if(!Term_OverrideSubterm(&conclusion,11,&substitutions[28])){ goto RULE_200; }
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[30])){ goto RULE_200; }
Truth conclusionTruth = Truth_Induction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_200:
{
if(!doublePremise) { goto RULE_201; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_201; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_201; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_201; }
substitutions[30] = subtree;
if(term2.atoms[0] != 58){ goto RULE_201; }
if(term2.atoms[1] != 45){ goto RULE_201; }
if(term2.atoms[2] != 40){ goto RULE_201; }
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_201; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_201; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 58;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[29])){ goto RULE_201; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[30])){ goto RULE_201; }
conclusion.atoms[5] = 45;
conclusion.atoms[6] = 40;
if(!Term_OverrideSubterm(&conclusion,11,&substitutions[28])){ goto RULE_201; }
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[30])){ goto RULE_201; }
Truth conclusionTruth = Truth_Induction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_201:
{
if(!doublePremise) { goto RULE_202; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 58){ goto RULE_202; }
if(term1.atoms[1] != 45){ goto RULE_202; }
if(term1.atoms[2] != 40){ goto RULE_202; }
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_202; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_202; }
substitutions[28] = subtree;
if(term2.atoms[0] != 45){ goto RULE_202; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_202; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_202; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 60;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 58;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[30])){ goto RULE_202; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_202; }
conclusion.atoms[5] = 45;
conclusion.atoms[6] = 40;
if(!Term_OverrideSubterm(&conclusion,11,&substitutions[30])){ goto RULE_202; }
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[28])){ goto RULE_202; }
Truth conclusionTruth = Truth_Comparison(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_202:
{
if(!doublePremise) { goto RULE_203; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_203; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_203; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_203; }
substitutions[29] = subtree;
if(term2.atoms[0] != 58){ goto RULE_203; }
if(term2.atoms[1] != 45){ goto RULE_203; }
if(term2.atoms[2] != 40){ goto RULE_203; }
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_203; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_203; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 60;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 58;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[30])){ goto RULE_203; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_203; }
conclusion.atoms[5] = 45;
conclusion.atoms[6] = 40;
if(!Term_OverrideSubterm(&conclusion,11,&substitutions[30])){ goto RULE_203; }
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[28])){ goto RULE_203; }
Truth conclusionTruth = Truth_Comparison(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_203:
{
if(!doublePremise) { goto RULE_204; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 58){ goto RULE_204; }
if(term1.atoms[1] != 45){ goto RULE_204; }
if(term1.atoms[2] != 40){ goto RULE_204; }
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_204; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_204; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_204; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_204; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_204; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 60;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 58;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[29])){ goto RULE_204; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[30])){ goto RULE_204; }
conclusion.atoms[5] = 45;
conclusion.atoms[6] = 40;
if(!Term_OverrideSubterm(&conclusion,11,&substitutions[28])){ goto RULE_204; }
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[30])){ goto RULE_204; }
Truth conclusionTruth = Truth_Comparison(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_204:
{
if(!doublePremise) { goto RULE_205; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_205; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_205; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_205; }
substitutions[30] = subtree;
if(term2.atoms[0] != 58){ goto RULE_205; }
if(term2.atoms[1] != 45){ goto RULE_205; }
if(term2.atoms[2] != 40){ goto RULE_205; }
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_205; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_205; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 60;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 58;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[29])){ goto RULE_205; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[30])){ goto RULE_205; }
conclusion.atoms[5] = 45;
conclusion.atoms[6] = 40;
if(!Term_OverrideSubterm(&conclusion,11,&substitutions[28])){ goto RULE_205; }
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[30])){ goto RULE_205; }
Truth conclusionTruth = Truth_Comparison(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_205:
{
if(!doublePremise) { goto RULE_206; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_206; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_206; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_206; }
substitutions[28] = subtree;
if(term2.atoms[0] != 58){ goto RULE_206; }
if(term2.atoms[1] != 45){ goto RULE_206; }
if(term2.atoms[2] != 40){ goto RULE_206; }
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_206; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_206; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 58;
conclusion.atoms[2] = 45;
conclusion.atoms[3] = 45;
conclusion.atoms[4] = 40;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[30])){ goto RULE_206; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[28])){ goto RULE_206; }
if(!Term_OverrideSubterm(&conclusion,7,&substitutions[30])){ goto RULE_206; }
if(!Term_OverrideSubterm(&conclusion,8,&substitutions[29])){ goto RULE_206; }
Truth conclusionTruth = Truth_Induction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_206:
{
if(!doublePremise) { goto RULE_207; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 58){ goto RULE_207; }
if(term1.atoms[1] != 45){ goto RULE_207; }
if(term1.atoms[2] != 40){ goto RULE_207; }
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_207; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_207; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_207; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_207; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_207; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 58;
conclusion.atoms[2] = 45;
conclusion.atoms[3] = 45;
conclusion.atoms[4] = 40;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[30])){ goto RULE_207; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[28])){ goto RULE_207; }
if(!Term_OverrideSubterm(&conclusion,7,&substitutions[30])){ goto RULE_207; }
if(!Term_OverrideSubterm(&conclusion,8,&substitutions[29])){ goto RULE_207; }
Truth conclusionTruth = Truth_Induction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_207:
{
if(!doublePremise) { goto RULE_208; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_208; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_208; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_208; }
substitutions[30] = subtree;
if(term2.atoms[0] != 58){ goto RULE_208; }
if(term2.atoms[1] != 45){ goto RULE_208; }
if(term2.atoms[2] != 40){ goto RULE_208; }
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_208; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_208; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 58;
conclusion.atoms[2] = 45;
conclusion.atoms[3] = 45;
conclusion.atoms[4] = 40;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_208; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[30])){ goto RULE_208; }
if(!Term_OverrideSubterm(&conclusion,7,&substitutions[29])){ goto RULE_208; }
if(!Term_OverrideSubterm(&conclusion,8,&substitutions[30])){ goto RULE_208; }
Truth conclusionTruth = Truth_Induction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_208:
{
if(!doublePremise) { goto RULE_209; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 58){ goto RULE_209; }
if(term1.atoms[1] != 45){ goto RULE_209; }
if(term1.atoms[2] != 40){ goto RULE_209; }
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_209; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_209; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_209; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_209; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_209; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 58;
conclusion.atoms[2] = 45;
conclusion.atoms[3] = 45;
conclusion.atoms[4] = 40;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_209; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[30])){ goto RULE_209; }
if(!Term_OverrideSubterm(&conclusion,7,&substitutions[29])){ goto RULE_209; }
if(!Term_OverrideSubterm(&conclusion,8,&substitutions[30])){ goto RULE_209; }
Truth conclusionTruth = Truth_Induction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_209:
{
if(!doublePremise) { goto RULE_210; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_210; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_210; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_210; }
substitutions[28] = subtree;
if(term2.atoms[0] != 58){ goto RULE_210; }
if(term2.atoms[1] != 45){ goto RULE_210; }
if(term2.atoms[2] != 40){ goto RULE_210; }
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_210; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_210; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 60;
conclusion.atoms[1] = 58;
conclusion.atoms[2] = 45;
conclusion.atoms[3] = 45;
conclusion.atoms[4] = 40;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[30])){ goto RULE_210; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[28])){ goto RULE_210; }
if(!Term_OverrideSubterm(&conclusion,7,&substitutions[30])){ goto RULE_210; }
if(!Term_OverrideSubterm(&conclusion,8,&substitutions[29])){ goto RULE_210; }
Truth conclusionTruth = Truth_Comparison(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_210:
{
if(!doublePremise) { goto RULE_211; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 58){ goto RULE_211; }
if(term1.atoms[1] != 45){ goto RULE_211; }
if(term1.atoms[2] != 40){ goto RULE_211; }
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_211; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_211; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_211; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_211; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_211; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 60;
conclusion.atoms[1] = 58;
conclusion.atoms[2] = 45;
conclusion.atoms[3] = 45;
conclusion.atoms[4] = 40;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[30])){ goto RULE_211; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[28])){ goto RULE_211; }
if(!Term_OverrideSubterm(&conclusion,7,&substitutions[30])){ goto RULE_211; }
if(!Term_OverrideSubterm(&conclusion,8,&substitutions[29])){ goto RULE_211; }
Truth conclusionTruth = Truth_Comparison(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_211:
{
if(!doublePremise) { goto RULE_212; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_212; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_212; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_212; }
substitutions[30] = subtree;
if(term2.atoms[0] != 58){ goto RULE_212; }
if(term2.atoms[1] != 45){ goto RULE_212; }
if(term2.atoms[2] != 40){ goto RULE_212; }
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_212; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_212; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 60;
conclusion.atoms[1] = 58;
conclusion.atoms[2] = 45;
conclusion.atoms[3] = 45;
conclusion.atoms[4] = 40;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_212; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[30])){ goto RULE_212; }
if(!Term_OverrideSubterm(&conclusion,7,&substitutions[29])){ goto RULE_212; }
if(!Term_OverrideSubterm(&conclusion,8,&substitutions[30])){ goto RULE_212; }
Truth conclusionTruth = Truth_Comparison(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_212:
{
if(!doublePremise) { goto RULE_213; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 58){ goto RULE_213; }
if(term1.atoms[1] != 45){ goto RULE_213; }
if(term1.atoms[2] != 40){ goto RULE_213; }
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_213; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_213; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_213; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_213; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_213; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 60;
conclusion.atoms[1] = 58;
conclusion.atoms[2] = 45;
conclusion.atoms[3] = 45;
conclusion.atoms[4] = 40;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_213; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[30])){ goto RULE_213; }
if(!Term_OverrideSubterm(&conclusion,7,&substitutions[29])){ goto RULE_213; }
if(!Term_OverrideSubterm(&conclusion,8,&substitutions[30])){ goto RULE_213; }
Truth conclusionTruth = Truth_Comparison(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_213:
{
if(!doublePremise) { goto RULE_214; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_214; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_214; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_214; }
substitutions[28] = subtree;
if(term2.atoms[0] != 45){ goto RULE_214; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_214; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_214; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 44;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 45;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[30])){ goto RULE_214; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_214; }
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[30])){ goto RULE_214; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[28])){ goto RULE_214; }
Truth conclusionTruth = Truth_Intersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_214:
{
if(!doublePremise) { goto RULE_215; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_215; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_215; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_215; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_215; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_215; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_215; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 44;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 45;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[30])){ goto RULE_215; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_215; }
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[30])){ goto RULE_215; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[28])){ goto RULE_215; }
Truth conclusionTruth = Truth_Intersection(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_215:
{
if(!doublePremise) { goto RULE_216; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_216; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_216; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_216; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_216; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_216; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_216; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 44;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 45;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[29])){ goto RULE_216; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[30])){ goto RULE_216; }
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_216; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[30])){ goto RULE_216; }
Truth conclusionTruth = Truth_Intersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_216:
{
if(!doublePremise) { goto RULE_217; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_217; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_217; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_217; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_217; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_217; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_217; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 44;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 45;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[29])){ goto RULE_217; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[30])){ goto RULE_217; }
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_217; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[30])){ goto RULE_217; }
Truth conclusionTruth = Truth_Intersection(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_217:
{
if(!doublePremise) { goto RULE_218; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 58){ goto RULE_218; }
if(term1.atoms[1] != 45){ goto RULE_218; }
if(term1.atoms[2] != 40){ goto RULE_218; }
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_218; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_218; }
substitutions[28] = subtree;
if(term2.atoms[0] != 45){ goto RULE_218; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_218; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_218; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 44;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 58;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[30])){ goto RULE_218; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_218; }
conclusion.atoms[5] = 45;
conclusion.atoms[6] = 40;
if(!Term_OverrideSubterm(&conclusion,11,&substitutions[30])){ goto RULE_218; }
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[28])){ goto RULE_218; }
Truth conclusionTruth = Truth_Intersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_218:
{
if(!doublePremise) { goto RULE_219; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_219; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_219; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_219; }
substitutions[29] = subtree;
if(term2.atoms[0] != 58){ goto RULE_219; }
if(term2.atoms[1] != 45){ goto RULE_219; }
if(term2.atoms[2] != 40){ goto RULE_219; }
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_219; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_219; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 44;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 58;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[30])){ goto RULE_219; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_219; }
conclusion.atoms[5] = 45;
conclusion.atoms[6] = 40;
if(!Term_OverrideSubterm(&conclusion,11,&substitutions[30])){ goto RULE_219; }
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[28])){ goto RULE_219; }
Truth conclusionTruth = Truth_Intersection(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_219:
{
if(!doublePremise) { goto RULE_220; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 58){ goto RULE_220; }
if(term1.atoms[1] != 45){ goto RULE_220; }
if(term1.atoms[2] != 40){ goto RULE_220; }
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_220; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_220; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_220; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_220; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_220; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 44;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 58;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[29])){ goto RULE_220; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[30])){ goto RULE_220; }
conclusion.atoms[5] = 45;
conclusion.atoms[6] = 40;
if(!Term_OverrideSubterm(&conclusion,11,&substitutions[28])){ goto RULE_220; }
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[30])){ goto RULE_220; }
Truth conclusionTruth = Truth_Intersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_220:
{
if(!doublePremise) { goto RULE_221; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_221; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_221; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_221; }
substitutions[30] = subtree;
if(term2.atoms[0] != 58){ goto RULE_221; }
if(term2.atoms[1] != 45){ goto RULE_221; }
if(term2.atoms[2] != 40){ goto RULE_221; }
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_221; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_221; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 44;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 58;
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[29])){ goto RULE_221; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[30])){ goto RULE_221; }
conclusion.atoms[5] = 45;
conclusion.atoms[6] = 40;
if(!Term_OverrideSubterm(&conclusion,11,&substitutions[28])){ goto RULE_221; }
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[30])){ goto RULE_221; }
Truth conclusionTruth = Truth_Intersection(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_221:
{
if(!doublePremise) { goto RULE_222; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_222; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_222; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_222; }
substitutions[28] = subtree;
if(term2.atoms[0] != 58){ goto RULE_222; }
if(term2.atoms[1] != 45){ goto RULE_222; }
if(term2.atoms[2] != 40){ goto RULE_222; }
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_222; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_222; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 44;
conclusion.atoms[1] = 58;
conclusion.atoms[2] = 45;
conclusion.atoms[3] = 45;
conclusion.atoms[4] = 40;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[30])){ goto RULE_222; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[28])){ goto RULE_222; }
if(!Term_OverrideSubterm(&conclusion,7,&substitutions[30])){ goto RULE_222; }
if(!Term_OverrideSubterm(&conclusion,8,&substitutions[29])){ goto RULE_222; }
Truth conclusionTruth = Truth_Intersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_222:
{
if(!doublePremise) { goto RULE_223; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 58){ goto RULE_223; }
if(term1.atoms[1] != 45){ goto RULE_223; }
if(term1.atoms[2] != 40){ goto RULE_223; }
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_223; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_223; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_223; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_223; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_223; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 44;
conclusion.atoms[1] = 58;
conclusion.atoms[2] = 45;
conclusion.atoms[3] = 45;
conclusion.atoms[4] = 40;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[30])){ goto RULE_223; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[28])){ goto RULE_223; }
if(!Term_OverrideSubterm(&conclusion,7,&substitutions[30])){ goto RULE_223; }
if(!Term_OverrideSubterm(&conclusion,8,&substitutions[29])){ goto RULE_223; }
Truth conclusionTruth = Truth_Intersection(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_223:
{
if(!doublePremise) { goto RULE_224; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_224; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_224; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_224; }
substitutions[30] = subtree;
if(term2.atoms[0] != 58){ goto RULE_224; }
if(term2.atoms[1] != 45){ goto RULE_224; }
if(term2.atoms[2] != 40){ goto RULE_224; }
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_224; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_224; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 44;
conclusion.atoms[1] = 58;
conclusion.atoms[2] = 45;
conclusion.atoms[3] = 45;
conclusion.atoms[4] = 40;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_224; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[30])){ goto RULE_224; }
if(!Term_OverrideSubterm(&conclusion,7,&substitutions[29])){ goto RULE_224; }
if(!Term_OverrideSubterm(&conclusion,8,&substitutions[30])){ goto RULE_224; }
Truth conclusionTruth = Truth_Intersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_224:
{
if(!doublePremise) { goto RULE_225; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 58){ goto RULE_225; }
if(term1.atoms[1] != 45){ goto RULE_225; }
if(term1.atoms[2] != 40){ goto RULE_225; }
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_225; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_225; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_225; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_225; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_225; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 44;
conclusion.atoms[1] = 58;
conclusion.atoms[2] = 45;
conclusion.atoms[3] = 45;
conclusion.atoms[4] = 40;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_225; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[30])){ goto RULE_225; }
if(!Term_OverrideSubterm(&conclusion,7,&substitutions[29])){ goto RULE_225; }
if(!Term_OverrideSubterm(&conclusion,8,&substitutions[30])){ goto RULE_225; }
Truth conclusionTruth = Truth_Intersection(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_225:
{
if(!doublePremise) { goto RULE_226; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_226; }
if(term1.atoms[1] != 45){ goto RULE_226; }
if(term1.atoms[2] != 45){ goto RULE_226; }
if(term1.atoms[3] != 2){ goto RULE_226; }
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_226; }
substitutions[29] = subtree;
if(term1.atoms[5] != 2){ goto RULE_226; }
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_226; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 0);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_226; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 44;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[28])){ goto RULE_226; }
conclusion.atoms[2] = 59;
conclusion.atoms[5] = 45;
conclusion.atoms[6] = 45;
conclusion.atoms[11] = 2;
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[29])){ goto RULE_226; }
conclusion.atoms[13] = 2;
if(!Term_OverrideSubterm(&conclusion,14,&substitutions[30])){ goto RULE_226; }
Truth conclusionTruth = Truth_Intersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_226:
{
if(!doublePremise) { goto RULE_227; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
subtree = Term_ExtractSubterm(&term1, 0);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_227; }
substitutions[28] = subtree;
if(term2.atoms[0] != 59){ goto RULE_227; }
if(term2.atoms[1] != 45){ goto RULE_227; }
if(term2.atoms[2] != 45){ goto RULE_227; }
if(term2.atoms[3] != 2){ goto RULE_227; }
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_227; }
substitutions[29] = subtree;
if(term2.atoms[5] != 2){ goto RULE_227; }
subtree = Term_ExtractSubterm(&term2, 6);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_227; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 44;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[28])){ goto RULE_227; }
conclusion.atoms[2] = 59;
conclusion.atoms[5] = 45;
conclusion.atoms[6] = 45;
conclusion.atoms[11] = 2;
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[29])){ goto RULE_227; }
conclusion.atoms[13] = 2;
if(!Term_OverrideSubterm(&conclusion,14,&substitutions[30])){ goto RULE_227; }
Truth conclusionTruth = Truth_Intersection(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_227:
{
if(!doublePremise) { goto RULE_228; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 44){ goto RULE_228; }
if(term1.atoms[1] != 45){ goto RULE_228; }
if(term1.atoms[2] != 45){ goto RULE_228; }
if(term1.atoms[3] != 1){ goto RULE_228; }
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_228; }
substitutions[29] = subtree;
if(term1.atoms[5] != 1){ goto RULE_228; }
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_228; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 0);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_228; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[28])){ goto RULE_228; }
conclusion.atoms[2] = 44;
conclusion.atoms[5] = 45;
conclusion.atoms[6] = 45;
conclusion.atoms[11] = 1;
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[29])){ goto RULE_228; }
conclusion.atoms[13] = 1;
if(!Term_OverrideSubterm(&conclusion,14,&substitutions[30])){ goto RULE_228; }
Truth conclusionTruth = Truth_Induction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_228:
{
if(!doublePremise) { goto RULE_229; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
subtree = Term_ExtractSubterm(&term1, 0);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_229; }
substitutions[28] = subtree;
if(term2.atoms[0] != 44){ goto RULE_229; }
if(term2.atoms[1] != 45){ goto RULE_229; }
if(term2.atoms[2] != 45){ goto RULE_229; }
if(term2.atoms[3] != 1){ goto RULE_229; }
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_229; }
substitutions[29] = subtree;
if(term2.atoms[5] != 1){ goto RULE_229; }
subtree = Term_ExtractSubterm(&term2, 6);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_229; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[28])){ goto RULE_229; }
conclusion.atoms[2] = 44;
conclusion.atoms[5] = 45;
conclusion.atoms[6] = 45;
conclusion.atoms[11] = 1;
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[29])){ goto RULE_229; }
conclusion.atoms[13] = 1;
if(!Term_OverrideSubterm(&conclusion,14,&substitutions[30])){ goto RULE_229; }
Truth conclusionTruth = Truth_Induction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_229:
{
if(!doublePremise) { goto RULE_230; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 59){ goto RULE_230; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_230; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_230; }
substitutions[30] = subtree;
subtree = Term_ExtractSubterm(&term2, 0);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_230; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 44;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[30])){ goto RULE_230; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[28])){ goto RULE_230; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_230; }
Truth conclusionTruth = Truth_Induction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_230:
{
if(!doublePremise) { goto RULE_231; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
subtree = Term_ExtractSubterm(&term1, 0);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_231; }
substitutions[28] = subtree;
if(term2.atoms[0] != 59){ goto RULE_231; }
subtree = Term_ExtractSubterm(&term2, 1);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_231; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_231; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 44;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[30])){ goto RULE_231; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[28])){ goto RULE_231; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_231; }
Truth conclusionTruth = Truth_Induction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_231:
{
if(!doublePremise) { goto RULE_232; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_232; }
if(term1.atoms[1] != 41){ goto RULE_232; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_232; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_232; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_232; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_232; }
if(term2.atoms[1] != 41){ goto RULE_232; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_232; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_232; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_232; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 45;
conclusion.atoms[3] = 41;
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[33])){ goto RULE_232; }
conclusion.atoms[5] = 41;
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[32])){ goto RULE_232; }
if(!Term_OverrideSubterm(&conclusion,7,&substitutions[29])){ goto RULE_232; }
if(!Term_OverrideSubterm(&conclusion,8,&substitutions[28])){ goto RULE_232; }
if(!Term_OverrideSubterm(&conclusion,11,&substitutions[28])){ goto RULE_232; }
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[29])){ goto RULE_232; }
Truth conclusionTruth = Truth_Induction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_232:
{
if(!doublePremise) { goto RULE_233; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_233; }
if(term1.atoms[1] != 41){ goto RULE_233; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_233; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_233; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_233; }
substitutions[28] = subtree;
if(term2.atoms[0] != 45){ goto RULE_233; }
if(term2.atoms[1] != 41){ goto RULE_233; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_233; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_233; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_233; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 45;
conclusion.atoms[3] = 41;
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[33])){ goto RULE_233; }
conclusion.atoms[5] = 41;
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[32])){ goto RULE_233; }
if(!Term_OverrideSubterm(&conclusion,7,&substitutions[29])){ goto RULE_233; }
if(!Term_OverrideSubterm(&conclusion,8,&substitutions[28])){ goto RULE_233; }
if(!Term_OverrideSubterm(&conclusion,11,&substitutions[28])){ goto RULE_233; }
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[29])){ goto RULE_233; }
Truth conclusionTruth = Truth_Induction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_233:
{
if(!doublePremise) { goto RULE_234; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 58){ goto RULE_234; }
if(term1.atoms[1] != 45){ goto RULE_234; }
if(term1.atoms[2] != 40){ goto RULE_234; }
if(term1.atoms[3] != 41){ goto RULE_234; }
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_234; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term1, 7);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_234; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 8);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_234; }
substitutions[28] = subtree;
if(term2.atoms[0] != 45){ goto RULE_234; }
if(term2.atoms[1] != 41){ goto RULE_234; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_234; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_234; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_234; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 58;
conclusion.atoms[3] = 41;
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[33])){ goto RULE_234; }
conclusion.atoms[5] = 45;
conclusion.atoms[6] = 40;
if(!Term_OverrideSubterm(&conclusion,7,&substitutions[28])){ goto RULE_234; }
if(!Term_OverrideSubterm(&conclusion,8,&substitutions[29])){ goto RULE_234; }
conclusion.atoms[11] = 41;
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[32])){ goto RULE_234; }
if(!Term_OverrideSubterm(&conclusion,23,&substitutions[29])){ goto RULE_234; }
if(!Term_OverrideSubterm(&conclusion,24,&substitutions[28])){ goto RULE_234; }
Truth conclusionTruth = Truth_Induction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_234:
{
if(!doublePremise) { goto RULE_235; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_235; }
if(term1.atoms[1] != 41){ goto RULE_235; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_235; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_235; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_235; }
substitutions[29] = subtree;
if(term2.atoms[0] != 58){ goto RULE_235; }
if(term2.atoms[1] != 45){ goto RULE_235; }
if(term2.atoms[2] != 40){ goto RULE_235; }
if(term2.atoms[3] != 41){ goto RULE_235; }
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_235; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term2, 7);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_235; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 8);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_235; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 58;
conclusion.atoms[3] = 41;
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[33])){ goto RULE_235; }
conclusion.atoms[5] = 45;
conclusion.atoms[6] = 40;
if(!Term_OverrideSubterm(&conclusion,7,&substitutions[28])){ goto RULE_235; }
if(!Term_OverrideSubterm(&conclusion,8,&substitutions[29])){ goto RULE_235; }
conclusion.atoms[11] = 41;
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[32])){ goto RULE_235; }
if(!Term_OverrideSubterm(&conclusion,23,&substitutions[29])){ goto RULE_235; }
if(!Term_OverrideSubterm(&conclusion,24,&substitutions[28])){ goto RULE_235; }
Truth conclusionTruth = Truth_Induction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_235:
{
if(!doublePremise) { goto RULE_236; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_236; }
if(term1.atoms[1] != 41){ goto RULE_236; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_236; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_236; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_236; }
substitutions[28] = subtree;
if(term2.atoms[0] != 58){ goto RULE_236; }
if(term2.atoms[1] != 45){ goto RULE_236; }
if(term2.atoms[2] != 40){ goto RULE_236; }
if(term2.atoms[3] != 41){ goto RULE_236; }
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_236; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 7);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_236; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 8);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_236; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 58;
conclusion.atoms[2] = 45;
conclusion.atoms[3] = 45;
conclusion.atoms[4] = 40;
conclusion.atoms[5] = 41;
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[32])){ goto RULE_236; }
conclusion.atoms[7] = 41;
if(!Term_OverrideSubterm(&conclusion,8,&substitutions[33])){ goto RULE_236; }
if(!Term_OverrideSubterm(&conclusion,11,&substitutions[29])){ goto RULE_236; }
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[28])){ goto RULE_236; }
if(!Term_OverrideSubterm(&conclusion,15,&substitutions[28])){ goto RULE_236; }
if(!Term_OverrideSubterm(&conclusion,16,&substitutions[29])){ goto RULE_236; }
Truth conclusionTruth = Truth_Induction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_236:
{
if(!doublePremise) { goto RULE_237; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 58){ goto RULE_237; }
if(term1.atoms[1] != 45){ goto RULE_237; }
if(term1.atoms[2] != 40){ goto RULE_237; }
if(term1.atoms[3] != 41){ goto RULE_237; }
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_237; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 7);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_237; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 8);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_237; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_237; }
if(term2.atoms[1] != 41){ goto RULE_237; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_237; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_237; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_237; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 58;
conclusion.atoms[2] = 45;
conclusion.atoms[3] = 45;
conclusion.atoms[4] = 40;
conclusion.atoms[5] = 41;
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[32])){ goto RULE_237; }
conclusion.atoms[7] = 41;
if(!Term_OverrideSubterm(&conclusion,8,&substitutions[33])){ goto RULE_237; }
if(!Term_OverrideSubterm(&conclusion,11,&substitutions[29])){ goto RULE_237; }
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[28])){ goto RULE_237; }
if(!Term_OverrideSubterm(&conclusion,15,&substitutions[28])){ goto RULE_237; }
if(!Term_OverrideSubterm(&conclusion,16,&substitutions[29])){ goto RULE_237; }
Truth conclusionTruth = Truth_Induction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_237:
{
if(!doublePremise) { goto RULE_238; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_238; }
if(term1.atoms[1] != 41){ goto RULE_238; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_238; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_238; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_238; }
substitutions[29] = subtree;
if(term2.atoms[0] != 45){ goto RULE_238; }
if(term2.atoms[1] != 41){ goto RULE_238; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_238; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_238; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_238; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 44;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 45;
conclusion.atoms[3] = 41;
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[32])){ goto RULE_238; }
conclusion.atoms[5] = 41;
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[33])){ goto RULE_238; }
if(!Term_OverrideSubterm(&conclusion,7,&substitutions[28])){ goto RULE_238; }
if(!Term_OverrideSubterm(&conclusion,8,&substitutions[29])){ goto RULE_238; }
if(!Term_OverrideSubterm(&conclusion,11,&substitutions[29])){ goto RULE_238; }
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[30])){ goto RULE_238; }
Truth conclusionTruth = Truth_Intersection(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_238:
{
if(!doublePremise) { goto RULE_239; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_239; }
if(term1.atoms[1] != 41){ goto RULE_239; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_239; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_239; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_239; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_239; }
if(term2.atoms[1] != 41){ goto RULE_239; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_239; }
substitutions[32] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_239; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_239; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 44;
conclusion.atoms[1] = 45;
conclusion.atoms[2] = 45;
conclusion.atoms[3] = 41;
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[32])){ goto RULE_239; }
conclusion.atoms[5] = 41;
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[33])){ goto RULE_239; }
if(!Term_OverrideSubterm(&conclusion,7,&substitutions[28])){ goto RULE_239; }
if(!Term_OverrideSubterm(&conclusion,8,&substitutions[29])){ goto RULE_239; }
if(!Term_OverrideSubterm(&conclusion,11,&substitutions[29])){ goto RULE_239; }
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[30])){ goto RULE_239; }
Truth conclusionTruth = Truth_Intersection(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 0, false);}
RULE_239:
{
if(!doublePremise) { goto RULE_240; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_240; }
if(term1.atoms[1] != 41){ goto RULE_240; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_240; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_240; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_240; }
substitutions[30] = subtree;
if(term2.atoms[0] != 44){ goto RULE_240; }
if(term2.atoms[1] != 45){ goto RULE_240; }
if(term2.atoms[2] != 45){ goto RULE_240; }
if(term2.atoms[3] != 41){ goto RULE_240; }
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_240; }
substitutions[32] = subtree;
if(term2.atoms[5] != 41){ goto RULE_240; }
subtree = Term_ExtractSubterm(&term2, 6);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_240; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term2, 7);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_240; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 8);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_240; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 11);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_240; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term2, 12);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_240; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 44;
conclusion.atoms[2] = 45;
conclusion.atoms[3] = 45;
conclusion.atoms[4] = 45;
conclusion.atoms[5] = 41;
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[31])){ goto RULE_240; }
conclusion.atoms[7] = 41;
if(!Term_OverrideSubterm(&conclusion,8,&substitutions[32])){ goto RULE_240; }
conclusion.atoms[9] = 41;
if(!Term_OverrideSubterm(&conclusion,10,&substitutions[33])){ goto RULE_240; }
if(!Term_OverrideSubterm(&conclusion,11,&substitutions[28])){ goto RULE_240; }
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[30])){ goto RULE_240; }
if(!Term_OverrideSubterm(&conclusion,15,&substitutions[28])){ goto RULE_240; }
if(!Term_OverrideSubterm(&conclusion,16,&substitutions[29])){ goto RULE_240; }
if(!Term_OverrideSubterm(&conclusion,19,&substitutions[29])){ goto RULE_240; }
if(!Term_OverrideSubterm(&conclusion,20,&substitutions[30])){ goto RULE_240; }
Truth conclusionTruth = Truth_Induction(truth1,truth2);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_240:
{
if(!doublePremise) { goto RULE_241; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 44){ goto RULE_241; }
if(term1.atoms[1] != 45){ goto RULE_241; }
if(term1.atoms[2] != 45){ goto RULE_241; }
if(term1.atoms[3] != 41){ goto RULE_241; }
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[32].atoms[0]!=0 && !Term_Equal(&substitutions[32], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_241; }
substitutions[32] = subtree;
if(term1.atoms[5] != 41){ goto RULE_241; }
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[33].atoms[0]!=0 && !Term_Equal(&substitutions[33], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_241; }
substitutions[33] = subtree;
subtree = Term_ExtractSubterm(&term1, 7);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_241; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 8);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_241; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 11);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_241; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 12);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_241; }
substitutions[30] = subtree;
if(term2.atoms[0] != 45){ goto RULE_241; }
if(term2.atoms[1] != 41){ goto RULE_241; }
subtree = Term_ExtractSubterm(&term2, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_241; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term2, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_241; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term2, 4);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_241; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 59;
conclusion.atoms[1] = 44;
conclusion.atoms[2] = 45;
conclusion.atoms[3] = 45;
conclusion.atoms[4] = 45;
conclusion.atoms[5] = 41;
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[31])){ goto RULE_241; }
conclusion.atoms[7] = 41;
if(!Term_OverrideSubterm(&conclusion,8,&substitutions[32])){ goto RULE_241; }
conclusion.atoms[9] = 41;
if(!Term_OverrideSubterm(&conclusion,10,&substitutions[33])){ goto RULE_241; }
if(!Term_OverrideSubterm(&conclusion,11,&substitutions[28])){ goto RULE_241; }
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[30])){ goto RULE_241; }
if(!Term_OverrideSubterm(&conclusion,15,&substitutions[28])){ goto RULE_241; }
if(!Term_OverrideSubterm(&conclusion,16,&substitutions[29])){ goto RULE_241; }
if(!Term_OverrideSubterm(&conclusion,19,&substitutions[29])){ goto RULE_241; }
if(!Term_OverrideSubterm(&conclusion,20,&substitutions[30])){ goto RULE_241; }
Truth conclusionTruth = Truth_Induction(truth2,truth1);
NAL_DerivedEvent(RuleTable_Reduce(conclusion), conclusionOccurrence, conclusionTruth, conclusionStamp, currentTime, parentPriority, conceptPriority, occurrenceTimeOffset, validation_concept, validation_cid, 1, false);}
RULE_241:;
}
Term RuleTable_Reduce(Term term1)
{
bool doublePremise = false;
goto RULE_241;
RULE_241:
{
if(doublePremise) { goto RULE_242; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_242; }
if(term1.atoms[1] != 42){ goto RULE_242; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_242; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_242; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_242; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[28])){ goto RULE_242; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_242; }
IN_DEBUG( fputs("Reduced: ", stdout); Narsese_PrintTerm(&term1); fputs(" -> ", stdout); Narsese_PrintTerm(&conclusion); puts(""); ) 
return conclusion;
}
RULE_242:
{
if(doublePremise) { goto RULE_243; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_243; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_243; }
substitutions[31] = subtree;
if(term1.atoms[2] != 42){ goto RULE_243; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_243; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_243; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_243; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[28])){ goto RULE_243; }
IN_DEBUG( fputs("Reduced: ", stdout); Narsese_PrintTerm(&term1); fputs(" -> ", stdout); Narsese_PrintTerm(&conclusion); puts(""); ) 
return conclusion;
}
RULE_243:
{
if(doublePremise) { goto RULE_244; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_244; }
if(term1.atoms[1] != 43){ goto RULE_244; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_244; }
substitutions[31] = subtree;
subtree = Term_ExtractSubterm(&term1, 3);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_244; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 4);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_244; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[28])){ goto RULE_244; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_244; }
IN_DEBUG( fputs("Reduced: ", stdout); Narsese_PrintTerm(&term1); fputs(" -> ", stdout); Narsese_PrintTerm(&conclusion); puts(""); ) 
return conclusion;
}
RULE_244:
{
if(doublePremise) { goto RULE_245; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_245; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_245; }
substitutions[31] = subtree;
if(term1.atoms[2] != 43){ goto RULE_245; }
subtree = Term_ExtractSubterm(&term1, 5);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_245; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 6);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_245; }
substitutions[28] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_245; }
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[28])){ goto RULE_245; }
IN_DEBUG( fputs("Reduced: ", stdout); Narsese_PrintTerm(&term1); fputs(" -> ", stdout); Narsese_PrintTerm(&conclusion); puts(""); ) 
return conclusion;
}
RULE_245:
{
if(doublePremise) { goto RULE_246; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 44){ goto RULE_246; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_246; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_246; }
substitutions[28] = subtree;
Term conclusion = {0};
if(!Term_OverrideSubterm(&conclusion,0,&substitutions[28])){ goto RULE_246; }
IN_DEBUG( fputs("Reduced: ", stdout); Narsese_PrintTerm(&term1); fputs(" -> ", stdout); Narsese_PrintTerm(&conclusion); puts(""); ) 
return conclusion;
}
RULE_246:
{
if(doublePremise) { goto RULE_247; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 61){ goto RULE_247; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_247; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_247; }
substitutions[28] = subtree;
Term conclusion = {0};
if(!Term_OverrideSubterm(&conclusion,0,&substitutions[28])){ goto RULE_247; }
IN_DEBUG( fputs("Reduced: ", stdout); Narsese_PrintTerm(&term1); fputs(" -> ", stdout); Narsese_PrintTerm(&conclusion); puts(""); ) 
return conclusion;
}
RULE_247:
{
if(doublePremise) { goto RULE_248; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_248; }
if(term1.atoms[1] != 43){ goto RULE_248; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_248; }
substitutions[31] = subtree;
if(term1.atoms[3] != 49){ goto RULE_248; }
if(term1.atoms[4] != 49){ goto RULE_248; }
subtree = Term_ExtractSubterm(&term1, 7);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_248; }
substitutions[28] = subtree;
if(term1.atoms[8] != 40){ goto RULE_248; }
subtree = Term_ExtractSubterm(&term1, 9);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_248; }
substitutions[29] = subtree;
if(term1.atoms[10] != 40){ goto RULE_248; }
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 49;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_248; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[28])){ goto RULE_248; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_248; }
IN_DEBUG( fputs("Reduced: ", stdout); Narsese_PrintTerm(&term1); fputs(" -> ", stdout); Narsese_PrintTerm(&conclusion); puts(""); ) 
return conclusion;
}
RULE_248:
{
if(doublePremise) { goto RULE_249; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_249; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_249; }
substitutions[31] = subtree;
if(term1.atoms[2] != 43){ goto RULE_249; }
if(term1.atoms[5] != 49){ goto RULE_249; }
if(term1.atoms[6] != 49){ goto RULE_249; }
subtree = Term_ExtractSubterm(&term1, 11);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_249; }
substitutions[28] = subtree;
if(term1.atoms[12] != 40){ goto RULE_249; }
subtree = Term_ExtractSubterm(&term1, 13);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_249; }
substitutions[29] = subtree;
if(term1.atoms[14] != 40){ goto RULE_249; }
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_249; }
conclusion.atoms[2] = 49;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_249; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[29])){ goto RULE_249; }
IN_DEBUG( fputs("Reduced: ", stdout); Narsese_PrintTerm(&term1); fputs(" -> ", stdout); Narsese_PrintTerm(&conclusion); puts(""); ) 
return conclusion;
}
RULE_249:
{
if(doublePremise) { goto RULE_250; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_250; }
if(term1.atoms[1] != 43){ goto RULE_250; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_250; }
substitutions[31] = subtree;
if(term1.atoms[3] != 49){ goto RULE_250; }
if(term1.atoms[4] != 49){ goto RULE_250; }
subtree = Term_ExtractSubterm(&term1, 7);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_250; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 8);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_250; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 9);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_250; }
substitutions[30] = subtree;
if(term1.atoms[10] != 40){ goto RULE_250; }
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 49;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_250; }
conclusion.atoms[3] = 52;
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[30])){ goto RULE_250; }
if(!Term_OverrideSubterm(&conclusion,7,&substitutions[28])){ goto RULE_250; }
if(!Term_OverrideSubterm(&conclusion,8,&substitutions[29])){ goto RULE_250; }
IN_DEBUG( fputs("Reduced: ", stdout); Narsese_PrintTerm(&term1); fputs(" -> ", stdout); Narsese_PrintTerm(&conclusion); puts(""); ) 
return conclusion;
}
RULE_250:
{
if(doublePremise) { goto RULE_251; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_251; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_251; }
substitutions[31] = subtree;
if(term1.atoms[2] != 43){ goto RULE_251; }
if(term1.atoms[5] != 49){ goto RULE_251; }
if(term1.atoms[6] != 49){ goto RULE_251; }
subtree = Term_ExtractSubterm(&term1, 11);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_251; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 12);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_251; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 13);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_251; }
substitutions[30] = subtree;
if(term1.atoms[14] != 40){ goto RULE_251; }
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_251; }
conclusion.atoms[2] = 49;
conclusion.atoms[5] = 52;
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[30])){ goto RULE_251; }
if(!Term_OverrideSubterm(&conclusion,11,&substitutions[28])){ goto RULE_251; }
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[29])){ goto RULE_251; }
IN_DEBUG( fputs("Reduced: ", stdout); Narsese_PrintTerm(&term1); fputs(" -> ", stdout); Narsese_PrintTerm(&conclusion); puts(""); ) 
return conclusion;
}
RULE_251:
{
if(doublePremise) { goto RULE_252; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_252; }
if(term1.atoms[1] != 43){ goto RULE_252; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_252; }
substitutions[31] = subtree;
if(term1.atoms[3] != 49){ goto RULE_252; }
if(term1.atoms[4] != 49){ goto RULE_252; }
subtree = Term_ExtractSubterm(&term1, 7);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_252; }
substitutions[30] = subtree;
if(term1.atoms[8] != 40){ goto RULE_252; }
subtree = Term_ExtractSubterm(&term1, 9);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_252; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 10);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_252; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 49;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_252; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[30])){ goto RULE_252; }
conclusion.atoms[4] = 52;
if(!Term_OverrideSubterm(&conclusion,9,&substitutions[28])){ goto RULE_252; }
if(!Term_OverrideSubterm(&conclusion,10,&substitutions[29])){ goto RULE_252; }
IN_DEBUG( fputs("Reduced: ", stdout); Narsese_PrintTerm(&term1); fputs(" -> ", stdout); Narsese_PrintTerm(&conclusion); puts(""); ) 
return conclusion;
}
RULE_252:
{
if(doublePremise) { goto RULE_253; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_253; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_253; }
substitutions[31] = subtree;
if(term1.atoms[2] != 43){ goto RULE_253; }
if(term1.atoms[5] != 49){ goto RULE_253; }
if(term1.atoms[6] != 49){ goto RULE_253; }
subtree = Term_ExtractSubterm(&term1, 11);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_253; }
substitutions[30] = subtree;
if(term1.atoms[12] != 40){ goto RULE_253; }
subtree = Term_ExtractSubterm(&term1, 13);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_253; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 14);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_253; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_253; }
conclusion.atoms[2] = 49;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[30])){ goto RULE_253; }
conclusion.atoms[6] = 52;
if(!Term_OverrideSubterm(&conclusion,13,&substitutions[28])){ goto RULE_253; }
if(!Term_OverrideSubterm(&conclusion,14,&substitutions[29])){ goto RULE_253; }
IN_DEBUG( fputs("Reduced: ", stdout); Narsese_PrintTerm(&term1); fputs(" -> ", stdout); Narsese_PrintTerm(&conclusion); puts(""); ) 
return conclusion;
}
RULE_253:
{
if(doublePremise) { goto RULE_254; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_254; }
if(term1.atoms[1] != 42){ goto RULE_254; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_254; }
substitutions[31] = subtree;
if(term1.atoms[3] != 48){ goto RULE_254; }
if(term1.atoms[4] != 48){ goto RULE_254; }
subtree = Term_ExtractSubterm(&term1, 7);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_254; }
substitutions[28] = subtree;
if(term1.atoms[8] != 40){ goto RULE_254; }
subtree = Term_ExtractSubterm(&term1, 9);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_254; }
substitutions[29] = subtree;
if(term1.atoms[10] != 40){ goto RULE_254; }
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 48;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_254; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[28])){ goto RULE_254; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_254; }
IN_DEBUG( fputs("Reduced: ", stdout); Narsese_PrintTerm(&term1); fputs(" -> ", stdout); Narsese_PrintTerm(&conclusion); puts(""); ) 
return conclusion;
}
RULE_254:
{
if(doublePremise) { goto RULE_255; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_255; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_255; }
substitutions[31] = subtree;
if(term1.atoms[2] != 42){ goto RULE_255; }
if(term1.atoms[5] != 48){ goto RULE_255; }
if(term1.atoms[6] != 48){ goto RULE_255; }
subtree = Term_ExtractSubterm(&term1, 11);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_255; }
substitutions[28] = subtree;
if(term1.atoms[12] != 40){ goto RULE_255; }
subtree = Term_ExtractSubterm(&term1, 13);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_255; }
substitutions[29] = subtree;
if(term1.atoms[14] != 40){ goto RULE_255; }
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_255; }
conclusion.atoms[2] = 48;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_255; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[29])){ goto RULE_255; }
IN_DEBUG( fputs("Reduced: ", stdout); Narsese_PrintTerm(&term1); fputs(" -> ", stdout); Narsese_PrintTerm(&conclusion); puts(""); ) 
return conclusion;
}
RULE_255:
{
if(doublePremise) { goto RULE_256; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_256; }
if(term1.atoms[1] != 42){ goto RULE_256; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_256; }
substitutions[31] = subtree;
if(term1.atoms[3] != 48){ goto RULE_256; }
if(term1.atoms[4] != 48){ goto RULE_256; }
subtree = Term_ExtractSubterm(&term1, 7);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_256; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 8);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_256; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 9);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_256; }
substitutions[30] = subtree;
if(term1.atoms[10] != 40){ goto RULE_256; }
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 48;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_256; }
conclusion.atoms[3] = 52;
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[30])){ goto RULE_256; }
if(!Term_OverrideSubterm(&conclusion,7,&substitutions[28])){ goto RULE_256; }
if(!Term_OverrideSubterm(&conclusion,8,&substitutions[29])){ goto RULE_256; }
IN_DEBUG( fputs("Reduced: ", stdout); Narsese_PrintTerm(&term1); fputs(" -> ", stdout); Narsese_PrintTerm(&conclusion); puts(""); ) 
return conclusion;
}
RULE_256:
{
if(doublePremise) { goto RULE_257; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_257; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_257; }
substitutions[31] = subtree;
if(term1.atoms[2] != 42){ goto RULE_257; }
if(term1.atoms[5] != 48){ goto RULE_257; }
if(term1.atoms[6] != 48){ goto RULE_257; }
subtree = Term_ExtractSubterm(&term1, 11);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_257; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 12);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_257; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 13);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_257; }
substitutions[30] = subtree;
if(term1.atoms[14] != 40){ goto RULE_257; }
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_257; }
conclusion.atoms[2] = 48;
conclusion.atoms[5] = 52;
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[30])){ goto RULE_257; }
if(!Term_OverrideSubterm(&conclusion,11,&substitutions[28])){ goto RULE_257; }
if(!Term_OverrideSubterm(&conclusion,12,&substitutions[29])){ goto RULE_257; }
IN_DEBUG( fputs("Reduced: ", stdout); Narsese_PrintTerm(&term1); fputs(" -> ", stdout); Narsese_PrintTerm(&conclusion); puts(""); ) 
return conclusion;
}
RULE_257:
{
if(doublePremise) { goto RULE_258; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_258; }
if(term1.atoms[1] != 42){ goto RULE_258; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_258; }
substitutions[31] = subtree;
if(term1.atoms[3] != 48){ goto RULE_258; }
if(term1.atoms[4] != 48){ goto RULE_258; }
subtree = Term_ExtractSubterm(&term1, 7);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_258; }
substitutions[28] = subtree;
if(term1.atoms[8] != 40){ goto RULE_258; }
subtree = Term_ExtractSubterm(&term1, 9);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_258; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 10);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_258; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 48;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_258; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[28])){ goto RULE_258; }
conclusion.atoms[4] = 52;
if(!Term_OverrideSubterm(&conclusion,9,&substitutions[29])){ goto RULE_258; }
if(!Term_OverrideSubterm(&conclusion,10,&substitutions[30])){ goto RULE_258; }
IN_DEBUG( fputs("Reduced: ", stdout); Narsese_PrintTerm(&term1); fputs(" -> ", stdout); Narsese_PrintTerm(&conclusion); puts(""); ) 
return conclusion;
}
RULE_258:
{
if(doublePremise) { goto RULE_259; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_259; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_259; }
substitutions[31] = subtree;
if(term1.atoms[2] != 42){ goto RULE_259; }
if(term1.atoms[5] != 48){ goto RULE_259; }
if(term1.atoms[6] != 48){ goto RULE_259; }
subtree = Term_ExtractSubterm(&term1, 11);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_259; }
substitutions[28] = subtree;
if(term1.atoms[12] != 40){ goto RULE_259; }
subtree = Term_ExtractSubterm(&term1, 13);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_259; }
substitutions[29] = subtree;
subtree = Term_ExtractSubterm(&term1, 14);
if((substitutions[30].atoms[0]!=0 && !Term_Equal(&substitutions[30], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_259; }
substitutions[30] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_259; }
conclusion.atoms[2] = 48;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_259; }
conclusion.atoms[6] = 52;
if(!Term_OverrideSubterm(&conclusion,13,&substitutions[29])){ goto RULE_259; }
if(!Term_OverrideSubterm(&conclusion,14,&substitutions[30])){ goto RULE_259; }
IN_DEBUG( fputs("Reduced: ", stdout); Narsese_PrintTerm(&term1); fputs(" -> ", stdout); Narsese_PrintTerm(&conclusion); puts(""); ) 
return conclusion;
}
RULE_259:
{
if(doublePremise) { goto RULE_260; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_260; }
if(term1.atoms[1] != 49){ goto RULE_260; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_260; }
substitutions[31] = subtree;
if(term1.atoms[3] != 52){ goto RULE_260; }
if(term1.atoms[4] != 40){ goto RULE_260; }
subtree = Term_ExtractSubterm(&term1, 7);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_260; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 8);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_260; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 49;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_260; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[28])){ goto RULE_260; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_260; }
IN_DEBUG( fputs("Reduced: ", stdout); Narsese_PrintTerm(&term1); fputs(" -> ", stdout); Narsese_PrintTerm(&conclusion); puts(""); ) 
return conclusion;
}
RULE_260:
{
if(doublePremise) { goto RULE_261; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_261; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_261; }
substitutions[31] = subtree;
if(term1.atoms[2] != 49){ goto RULE_261; }
if(term1.atoms[5] != 52){ goto RULE_261; }
if(term1.atoms[6] != 40){ goto RULE_261; }
subtree = Term_ExtractSubterm(&term1, 11);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_261; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 12);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_261; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_261; }
conclusion.atoms[2] = 49;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_261; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[29])){ goto RULE_261; }
IN_DEBUG( fputs("Reduced: ", stdout); Narsese_PrintTerm(&term1); fputs(" -> ", stdout); Narsese_PrintTerm(&conclusion); puts(""); ) 
return conclusion;
}
RULE_261:
{
if(doublePremise) { goto RULE_262; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_262; }
if(term1.atoms[1] != 48){ goto RULE_262; }
subtree = Term_ExtractSubterm(&term1, 2);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_262; }
substitutions[31] = subtree;
if(term1.atoms[3] != 52){ goto RULE_262; }
if(term1.atoms[4] != 40){ goto RULE_262; }
subtree = Term_ExtractSubterm(&term1, 7);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_262; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 8);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_262; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
conclusion.atoms[1] = 48;
if(!Term_OverrideSubterm(&conclusion,2,&substitutions[31])){ goto RULE_262; }
if(!Term_OverrideSubterm(&conclusion,3,&substitutions[28])){ goto RULE_262; }
if(!Term_OverrideSubterm(&conclusion,4,&substitutions[29])){ goto RULE_262; }
IN_DEBUG( fputs("Reduced: ", stdout); Narsese_PrintTerm(&term1); fputs(" -> ", stdout); Narsese_PrintTerm(&conclusion); puts(""); ) 
return conclusion;
}
RULE_262:
{
if(doublePremise) { goto RULE_263; }
Term substitutions[27+NUM_ELEMENTS(Narsese_RuleTableVars)+2] = {0}; Term subtree = {0};
if(term1.atoms[0] != 45){ goto RULE_263; }
subtree = Term_ExtractSubterm(&term1, 1);
if((substitutions[31].atoms[0]!=0 && !Term_Equal(&substitutions[31], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_263; }
substitutions[31] = subtree;
if(term1.atoms[2] != 48){ goto RULE_263; }
if(term1.atoms[5] != 52){ goto RULE_263; }
if(term1.atoms[6] != 40){ goto RULE_263; }
subtree = Term_ExtractSubterm(&term1, 11);
if((substitutions[28].atoms[0]!=0 && !Term_Equal(&substitutions[28], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_263; }
substitutions[28] = subtree;
subtree = Term_ExtractSubterm(&term1, 12);
if((substitutions[29].atoms[0]!=0 && !Term_Equal(&substitutions[29], &subtree)) || Narsese_copulaEquals(subtree.atoms[0], SET_TERMINATOR)){ goto RULE_263; }
substitutions[29] = subtree;
Term conclusion = {0};
conclusion.atoms[0] = 45;
if(!Term_OverrideSubterm(&conclusion,1,&substitutions[31])){ goto RULE_263; }
conclusion.atoms[2] = 48;
if(!Term_OverrideSubterm(&conclusion,5,&substitutions[28])){ goto RULE_263; }
if(!Term_OverrideSubterm(&conclusion,6,&substitutions[29])){ goto RULE_263; }
IN_DEBUG( fputs("Reduced: ", stdout); Narsese_PrintTerm(&term1); fputs(" -> ", stdout); Narsese_PrintTerm(&conclusion); puts(""); ) 
return conclusion;
}
RULE_263:;
return term1;
}

