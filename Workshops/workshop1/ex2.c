#include<stdio.h>
 int main(){
 	float a,b,c,max;
 	printf("Nhap a,b,c ");
 	scanf("%f %f %f",&a,&b,&c);
 	max = a;
    if (b > max) max = b;
    if (c > max) max = c;
	printf("max = %.2f", max);
    return 0;
 		
 }