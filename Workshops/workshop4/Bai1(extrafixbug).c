#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    float a, b;
	char extra;
    char input[100];
    // đọc cả dòng input
    fgets(input, sizeof(input), stdin);

    // kiểm tra có đúng 2 số và không có ký tự dư
    if (sscanf(input, "%f %f %c", &a, &b, &extra) != 2) {
        printf("Invalid input");
        return 0;
    float result = cbrt(a*a + b*b);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%.2f", result);
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
