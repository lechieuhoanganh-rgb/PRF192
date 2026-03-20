#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int checkPalindrome(char str[]){
	 int isPalindrome = 1; // 1 means True, 0 means False
	 int length = 0;
	  // Step 1: Find the length manually
  while (str[length] != '\0') {
      length++;
  }

  // Step 2: Check for symmetry
  int start = 0;
  int end = length - 1;

  while (start < end) {
      if (str[start] != str[end]) {
          isPalindrome = 0; // Found a mismatch
          break;            // No need to check further
      }
      start++;
      end--;
  }
  return isPalindrome;	
}
int main() {
  system("cls");
  printf("INPUT:\n");
  
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char str[100];
  
  //int isPalindrome = 1; // 1 means True, 0 means False

  // Read a string without spaces
  scanf("%s", str);

 
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if (checkPalindrome(str)) {
      printf("Yes");
  } else {
      printf("No");
  }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}