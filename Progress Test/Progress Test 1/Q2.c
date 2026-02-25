#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
	int x, y;
    int sum = 0;
    if (scanf("%d", &x) != 1) {
        printf("Error: Invalid input");
        return 0;
    }
    if (scanf("%d", &y) != 1) {
        printf("Error: Invalid input");
        return 0;
    }
    if (x >= y) {
        printf("Error: x must be less than y");
        return 0;
    }
    for (int i = x; i <= y; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d", sum);
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
