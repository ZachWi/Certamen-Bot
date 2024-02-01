#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include "quid.h"

int main(int argc, char** argv){
  srand(time(NULL));
  
  
  int r = (rand() % 14 + 1);

  char ans[100];
  char pos[1];

  for (int i = 0; i <= 1;) {

    printf("%s\n", quid(r));
    // DEBUG
    printf("%d\n", r);
  


    scanf("%s", ans);
    printf("%s\n", answer(r, ans));
    printf("Press any key for another, Press Q to quit.\n");
    scanf("%s", pos);  
    
    if(strcmp(pos, "q") == 0){
      printf("Thanks for playing!\n");
      return 0;
    }
    else {
      r = (rand() % 14 + 1);
    }
  }


  return 0;  
}
