#include<stdio.h>
int main(){
	int n;
	int count=1;
	printf("nhap so cuoi in ra: ");
	while (scanf("%d",&n)!=1 || n<=0){
		printf("nhap lai so: ");
		while(getchar() != '\n');
	}
	while (count<=n){
		printf("%d\n",count);
		count ++;
	}
	printf("-_-");
	return 0;
}