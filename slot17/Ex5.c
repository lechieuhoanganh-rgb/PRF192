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
  char findChar, replaceChar;
  int replaceCount = 0;

  // 1. Input the string
  gets(str); 

  // 2. Input the character to find
  // Note: the space before %c is to consume the newline from the previous input
  scanf(" %c", &findChar);

  // 3. Input the replacement character
  scanf(" %c", &replaceChar);

  // Logic: Iterate and replace
  for (int i = 0; str[i] != '\0'; i++) {
      if (str[i] == findChar) {
          str[i] = replaceChar;
          replaceCount++;
      }
  }

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d\n", replaceCount);
  printf("%s", str);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}