#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
  int n,i;
  if (scanf("%d",&n)!=1){
  	printf("Error: The input must be number");
  	return 0;
  }
  else if (n<=0){
  	printf("Error: The input must b be over 0 ");
  	return 0;
  }

  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  for(i=1;i<=n;i++){
  	printf("%-10d",3*i);//only one letter in 1 dot	
  }
  	//@STUDENT: WRITE YOUR OUTPUT HERE:

  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
