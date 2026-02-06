#include<stdio.h>
int main(){
	int n,o,d;
	int c=0;
	printf("Nhap so nguyen n: ");
	while (scanf("%d",&n)!=1){//nhap dc so nguyen th
		printf("nhap lai: ");
		scanf("%d",&n);
		while(getchar() != '\n');//khac phuc nhap sai
	}
	o=n;//bien giu lai de in ra o kq cuoi
	while (n!=0){//n tien ve 0 nham dao so
		c=n%10;//lay phan du so cuoi cung
		d=d*10+c;//gan vao so dau tien cua bien khac
		n/=10;//xoa so 0 sau khi lay phan du o so cuoi cung
	}
	printf("so dao nguoc cua %d la %d",o,d);
}