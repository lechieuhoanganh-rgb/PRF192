#include<stdio.h>
int main(){
	int N,t;
	N=950;
	printf("nhap t = ");
	scanf("%d",&t);
	if (t<100){
		N = N + 0;
		printf("So tien dien cua %d kwhs la: %d",t,N);
	}
	else if (t>=100 && t<150){
		N = N + 300;
		printf("So tien dien cua %d kwhs la: %d",t,N);
	}
	else if (t>=150 && t<200){
		N = N + 400;
		printf("So tien dien cua %d kwhs la: %d",t,N);
	}
	else if (t>=200){
		N = N + 500;
		printf("So tien dien cua %d kwhs la: %d",t,N);
	}
	else if (t<=0){
		printf("sai roi");
	}
	return 0;
	
}