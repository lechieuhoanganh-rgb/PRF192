#include<stdio.h>
int main(){
	float a,z;
	int y;
	printf("nhap so thuc: ");
	scanf("%f",&a);
	printf("gia tri da nhap: %f\n",a);
	printf("phan nguyen: %.0f\n",a);
	y = (int)a;
	z = a - y;
	printf("phan thuc: %g",z);
}