#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
  int n, i,d;
  float t = 1;
  int p;
  if (scanf("%d",&n) != 1){
  	printf("ERROR:THE INPUT MUST BE NUMBER");
	return 0;
	}
	else if (n<=0){
		printf("ERROR:n  MUST BE GREATER THAN 0");
		return 0;
	}
	
	p = 1;
	for (i = 1; i <= n; i++) {
    p *= i;
	}
	t+=1.0/p;
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%.3f",t);
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
