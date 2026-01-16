#include<stdio.h>
int main(){
	int a,b;
	printf("nhap a, b: ");
	int kq = scanf("%d %d",&a, &b);
	int c = a + b;
	printf("--> a + b = %d + %d = %d\n", a, b, c);
	if (kq>0){
		printf("a = %d, b = %d,",a,b);
	}
	else{
		printf("kq scanf: %d", kq);
	}
		
}