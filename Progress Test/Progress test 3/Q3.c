#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int a;
	int flag=0;
	int b=0;
	int c = scanf("%d",&a);
	if (c!=1){
		flag=1;
	}
	
	
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	if (flag ==1){
  		printf("error: invalid input");
  		return 0;
	  }
	if (a<0){
		a=abs(a);
	}
	while (a>0){
  		b=b+(a%10);
  		a=a/10;
	  }	
  	printf("%d",b);
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
