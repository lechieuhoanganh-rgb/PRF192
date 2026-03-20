#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

struct Point {
    int x;
    int y;
};
int main() {
  system("cls");
  printf("INPUT:\n");
  
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  struct Point p1, p2;

    
    printf("Nhap diem p1 (x y): ");
    scanf("%d %d", &p1.x, &p1.y);

    p2.x = 10;
    p2.y = 20;
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");

  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("Diem p1: (%d, %d)\n", p1.x, p1.y);
  printf("Diem p2: (%d, %d)\n", p2.x, p2.y);

 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}