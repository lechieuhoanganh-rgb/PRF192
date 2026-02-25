#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
	float a, b, x;
    if (scanf("%f", &a) != 1) {
        printf("Error: Invalid input");
        return 0;
    }
    if (scanf("%f", &b) != 1) {
        printf("Error: Invalid input");
        return 0;
    }
    if (a == 0) {
        printf("Error: Division by zero");
        return 0;
    }

  x = cbrt(-b / a);
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
    printf("%.3f", x);
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
