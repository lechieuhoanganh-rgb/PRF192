#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
// Function to find the largest even number in an array
int findLargestEvenNumber(int arr[], int n){
	//@STUDENT: WRITE YOUR CODE HERE:
	int e=0;
	int b[n];
	int c=0;
	for (int i=0;i<n;i++){
		if(arr[i]%2==1){
			b[c]=arr[i];
			c++;
		}	
	}
	for (int i=0;i<c-1;i++){
		if (b[i]<b[i]+1) {
		e=b[i+1];
	}
	}
	return e;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("INPUT:\n");
  int a;
  scanf("%d",&a);
  int b[a];
  for (int i=0;i<a;i++){
  	scanf("%d",&b[i]);
  }
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	int e=findLargestEvenNumber(b,a);
	printf("%d", e);


  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
