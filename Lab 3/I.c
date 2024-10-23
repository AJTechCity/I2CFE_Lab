#include <stdio.h>

int main() {

  int i, j;
  char currentChar = 'A';

  for (i = 1; i <= 6; i++) {
      for(j=0;j<i;j++){
          printf("%c", currentChar);
      }
      currentChar+=2;
      printf("\n");
  }

  return 0;
}