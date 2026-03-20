#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char str[200];
  int digits = 0, letters = 0, others = 0;

  // Read the mixed string including spaces
  scanf("%[^\n]", str);

  // Iterate through the string manually
  for (int i = 0; str[i] != '\0'; i++) {
      // Check if it's a letter (A-Z or a-z)
      if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
          letters++;
      }
      // Check if it's a digit (0-9)
      else if (str[i] >= '0' && str[i] <= '9') {
          digits++;
      }
      // Everything else (spaces, @, #, !, etc.)
      else {
          others++;
      }
  }

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d\n", digits);
  printf("%d\n", letters);
  printf("%d", others);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}