#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char str[100];
  int count = 0;
  int i = 0;

  // Use fgets to read string with spaces safely
  fgets(str, sizeof(str), stdin);

  // Remove the newline character added by fgets if it exists
  str[strcspn(str, "\n")] = '\0';

  // Manual counting logic
  //for(i =0; str[i]!= '\0', i++)
  	//count ++;
  	
  	
  while (str[i] != '\0') {
      count++;
      i++;
  }
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d", count);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}