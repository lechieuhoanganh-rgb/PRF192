#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct{
	int x;
	int y;
}Point;
int main() {
  system("cls");
  printf("INPUT:\n");
  
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  scanf("%d",&n);
  Point ds[n];
  for (int i=0;i<n;i++){
  	scanf("%d %d",&ds[i].x,&ds[i].y);
  }
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  
  //@STUDENT: WRITE YOUR OUTPUT HERE:
 for (int i=0;i<n;i++){
  	printf("(%d,%d)\n",ds[i].x,ds[i].y);
  }
 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}