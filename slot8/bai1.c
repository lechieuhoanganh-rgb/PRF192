#include<stdio.h>
#include<math.h>
int main(){
	float n;
	printf("nhap n: ");
	while (scanf("%f",&n)!=1 || n<=0 || n>=1000){
	printf("nhap lai n: ");
	fflush(stdin);
	}
	printf("can 2 cua %g la: %.2f",n,sqrt(n));
	return 0;
}