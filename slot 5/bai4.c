#include<stdio.h>
int main(){
	int N,t;
	t=950;
	printf("nhap N = ");
	scanf("%d",&N);
	if (N < 0) {
    	printf("sai roi");
	}
	else if (N < 100) {
    	t = t + 0;
    	printf("%d kwhs = %d dong", N, t);
	}
	else if (N < 150) {
    	t = t + 300;
    	printf("%d kwhs = %d dong", N, t);
	}
	else if (N < 200) {
    	t = t + 400;
    	printf("%d kwhs = %d dong", N, t);
	}
	else {
    	t = t + 500;
    	printf("%d kwhs = %d dong", N, t);
	}

	return 0;
	
}