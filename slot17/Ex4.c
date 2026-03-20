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
  int wordCount = 0;
  int inWord = 0; // 0 means False (currently in space), 1 means True (inside a word)

  // Use scanf to read the entire line including spaces
  scanf("%[^\n]", str);

  // Step 1: Iterate through the string
  for (int i = 0; str[i] != '\0'; i++) {
      // Check if current character is NOT a space
      if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
          // If we weren't in a word, this is the start of a new word
          if (inWord == 0) {
              wordCount++;
              inWord = 1; // Mark that we are now inside a word
          }
      } else {
          // If we hit a space, we are no longer inside a word
          inWord = 0;
      }
  }
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d", wordCount);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}