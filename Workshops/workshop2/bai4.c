#include<stdio.h>
int main(){
	int n,kq;
	int count = 1;
	printf("nhap so ban muon lam bang cuu chuong: ");
	while (scanf("%d",&n)!=1 || n<0){
		printf("nhap lai: ");
		scanf("%d",&n);
		while(getchar() != '\n');
	}
	while (count<=10){
		kq = n * count;
		printf("%d * %d = %d\n",n,count,kq);
		count++;
	}
	return 0;
}