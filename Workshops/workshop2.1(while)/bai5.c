#include<stdio.h>
int main(){
	int n;
	int tpre=0;
	int a=0;
	int t=1;
	while (1){
		printf("nhap so nguyen duong thu %d: ",t);
		if (scanf("%d",&n)!=1||n<0){//ch? check dc th ch? có ch?
			printf("nhap lai");
			scanf("%d",n);
			while(getchar() != '\n');
		}
		a=a+n;
		printf("so thu %d cong voi so thu %d co tong la: %d\n",t,tpre,a);
		tpre=t;
		t++;
		if (n==0) break;
	}
}