#include <string.h>

char* answer(int r, const char* ans){
  if(r == 1){
    if (strcmp(ans, "ATILLA") == 0){
      return "correct";
    }
    else {
      return "false";
    }
  }
  if(r == 2){
    if(strcmp(ans, "HERMES") == 0){
      return "correct";
    }
    else {
      return "false";
    }
  }
  if(r == 3){
    if (strcmp(ans, "CORIOLANUS") == 0){
      return "correct";
    }
    else {
      return "false";
    }
  }
  if(r == 4){
    if (strcmp(ans, "LUCRETIUS") == 0){
      return "correct";
    }
    else {
      return "false";
    }
  }
  if(r == 5){
    if (strcmp(ans, "PLEO") == 0){
      return "correct";
    }
    else {
      return "false";
    }
  }
  if(r == 6){
    if (strcmp(ans, "SENECA") == 0){
      return "correct";
    }
    else {
      return "false";
    }
  }
  if(r == 7){
    if (strcmp(ans, "VESPASIAN") == 0){
      return "correct";
    }
    else {
      return "false";
    }
  }
  if(r == 8){
    if (strcmp(ans, "HYACINTHUS") == 0){
      return "correct";
    }
    else {
      return "false";
    }
  }
  if(r == 9){
    if (strcmp(ans, "CELER") == 0){
      return "correct";
    }
    else {
      return "false";
    }
  }
  if(r == 10){
    if (strcmp(ans, "MINOR,MINUS") == 0){
      return "correct";
    }
    else {
      return "false";
    }
  }
  if(r == 11){
    if (strcmp(ans, "CHARON") == 0){
      return "correct";
    }
    else {
      return "false";
    }
  }
  if(r == 12){
    if (strcmp(ans, "CLAUDIUS") == 0){
      return "correct";
    }
    else {
      return "false";
    }
  }
  if(r == 13){
    if (strcmp(ans, "43BC") == 0){
      return "correct";
    }
    else {
      return "false";
    }
  }
  if(r == 14){
    if (strcmp(ans, "ANTINOUS") == 0){
      return "correct";
    }
    else {
      return "false";
    }
  }
}

char* quid(int r){
  switch(r){
    case 1: return "What enemy of Rome was defeated at the Catalaunian Plains in 451 A.D. by Flavius Aetius?";
    case 2: return "What god tricked Apollo on the day of his birth by stealing his brother’s cattle?";
    case 3: return "In the early years of the Republic, what exiled nobleman led an enemy army nearly to the gates of Rome and only turned around because of the appeals of his mother?";
    case 4: return "What Roman author, born in Rome, wrote a six book epic on Epicurean philosophy?";
    case 5: return "What Latin verb with what meaning is the ultimate root of complete?";
    case 6: return "What Stoic philosopher, born in Corduba, wrote several tragedies, the Epistulae Morales, and the Apocolocyntosis? ";
    case 7: return "What emperor, according to Suetonius, said “Vae, puto deus fio” on his death bed?";
    case 8: return "What Spartan youth from Amyclae caught the eye of both Apollo and Zephyrus and was killed by a throw of the discus?";
    case 9: return "What Latin adjective means swift or quick?";
    case 10: return "Give the comparative form of parvus";
    case 11: return "Who was the ferryman of the Underworld that carries souls across the Styx?";
    case 12: return "Born at Lugdunum, this emperor founded colonies at Colchester and Cologne and thus revived Augustus’ policy of creating colonies in the provinces.";
    case 13: return "In what year was Publius Ovidius Naso, known as Ovid, born?";
    case 14: return "Which of the suitors did Odysseus slay first?";
    default: return 0;
  }
}
