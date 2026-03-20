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
	scanf("%d",&a);
	int b[a];
	for (int i=0;i<a;i++){
		scanf("%d",&b[i]);
	}
	
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	int c=0;
  	int d[a];
	for (int i;i<a;i++){
		if(b[i]%2==0) {
		d[c]=b[i];
		c++;
	}
	}
	int f,e;
	for(int i;i<c-1;i++){
		if(d[i]<d[i-1]) e=d[i-1];
		if(d[i]>d[i-1]) f=d[i-1];
	}
	for(int i;i<a;i++){
		if(b[i]==e) b[i]=f;
		if(b[i]==f) b[i]=e;
		printf("%d ",b[i]);
	}
  	
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
