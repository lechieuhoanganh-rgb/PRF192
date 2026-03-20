#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char s[100];
	fgets(s,sizeof(s),stdin);
	int z=strlen(s);
	
	
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for (int i;i<2 && i<z;i++){
		s[i]=toupper(s[i]);
	}
  	for (int i;i<z;i++){
  		if (s[i]=' '){
  			if (i+1 < z)
  				s[i+1]=toupper(s[i+1]);
		  }
		  	if (i+2 < z){
		  		s[i+2]=toupper(s[i+2]);
			  }
	  }
  
  	printf("%s",s);
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
