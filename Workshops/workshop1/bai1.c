#include<stdio.h>
int main(){
	float x,y,z;
	printf("nhap km, phut: ");
	if (scanf("%f %f", &x, &z) != 2) {
    printf("Nhap sai\n");
    return 0;
	}
	if (x<0){
		printf("nhap sai");
		return 0;
	}
	else if	(x>=0 && x<=0.5){
		y= 12000;
	}
	else if (x>=0.5 && x<=30){
		y = 12000 + (x-0.5)*15000;
	}
	else {
		y = 12000 + (30-0.5)*15000 + (x-30)*12000;
	}
	if (z<0){
		printf("nhap sai");
		return 0;
	}
	else if (z>5){
		y=y + ((z-5)*1000);
	}
	printf("%-10s%-15s%-10s\n","So km","So phut cho","Tong tien");
	printf("%-10g%-15g%-10g",x,z,y);
	return 0;
}