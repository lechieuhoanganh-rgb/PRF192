#include<stdio.h>
int main(){
	int a=7, b=2;
	float kq;
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	kq = a+b;
	printf("%d + %d = %.0f\n",a,b,kq);
	kq = a - b;
	printf("%d - %d = %.0f\n",a,b,kq);
	kq = a * b;
	printf("%d * %d = %.0f\n",a,b,kq);
	kq = (float)a / b;
	printf("%d / %d = %.2f",a,b,kq);
	return 0;
}