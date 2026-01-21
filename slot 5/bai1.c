#include<stdio.h>
#include<math.h>
int main(){
	int x;
	printf("Nhap x: ");
	scanf("%d",&x);
	int preX=x;
	if (x<0)
		x=-x;
	printf("|%d| = %d\n",preX,x);
	printf("can %d = %.2f",x,sqrt(x));
	return 0;
}