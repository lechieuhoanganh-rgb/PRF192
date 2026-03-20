#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	int flag1=0;
	int flag2=0;
	int flag3=0;
	int a =scanf("%d",&n);
	if (a!=1 || a<0) flag1=1;
	int b[n];
	if(flag1==1){
  		printf("error:invalid input");
  		return 0;
	  }
  	for (int i=0;i<n;i++){
		int c = scanf("%d",&b[i]);
		if (c!=1) flag2=1;
	}
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	
	if (flag2==1){
		printf("error:invalid input on array");
	}
	int c[n];
	int d=0;
	for (int i=0;i<n;i++){
		if (b[i]%2==0){
			c[d]=b[i];
			d++;
		}
	}
	int e=0;
	for(int i=0;i<d-1;i++){
		if (c[i]<c[i+1]) e=c[i+1];
		if (e==0)flag3=1;
	}
	if (flag3==1){
		printf("");
	}
	else{
		printf("%d",e);
	}
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
