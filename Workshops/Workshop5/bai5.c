#include<stdio.h>
void swap2(int *a, int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
	printf("\n%d %d",*a,*b);
}
void swap3(int *a, int *b, int *c){
	int d;
	printf("\n\na b c\n%d %d %d",*a,*b,*c);
	d=*a;
	*a=*c;
	*c=*b;
	*b=d;
	printf("\n%d %d %d",*a,*b,*c);
}
int main(){//sáng tạo:)
	int a,b,c;
	printf("a b c\n");
	scanf("%d %d %d",&a,&b,&c);
	int a1=a;
	int b1=b;
	int c1=c;
	printf("\na b\n%d %d",a,b);
	swap2(&a,&b);
	a=a1;
	b=b1;
	printf("\n\na c\n%d %d",a,c);
	swap2(&a,&c);
	a=a1;
	c=c1;
	printf("\n\nb c\n%d %d",b,c);
	swap2(&b,&c);
	b=b1;
	c=c1;
	swap3(&a,&b,&c);	
}