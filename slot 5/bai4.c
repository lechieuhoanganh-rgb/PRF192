#include<stdio.h>
int main(){
	int N,t;
	printf("nhap N = ");
	scanf("%d",&N);
	if (N < 0) {
    	printf("sai roi");
	}
	else if (N < 100) {
    	t = N*950;
    	printf("%d kwhs = %d dong", N, t);
	}
	else if (N < 150) {
    	t = 100*950 + (N-100)*1250;
    	printf("%d kwhs = %d dong", N, t);
	}
	else if (N < 200) {
    	t = 100*950 + 50*1250 + (N-150)*1350;
    	printf("%d kwhs = %d dong", N, t);
	}
	else {
    	t = 100*950 + 50*1250 + 50*1350 + (N-200)*1450;
    	printf("%d kwhs = %d dong", N, t);
	}

	return 0;
	//em ko ro de bai do quen chup nen em de tam so vay a.
	
}