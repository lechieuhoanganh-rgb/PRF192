#include<stdio.h>
int main(){
	float a=5;//khai bao bien va gia tri
	float b=10.216;
	float sum = a + b;
	printf(" a=%1.0f \n",a);
	printf(" b=%5.3f \n",b);
	printf("%1.0f",a);
	printf("+%5.3f",b);
	printf("=%5.2f",sum);
	return 0;//ket thuc chuong trinh
}