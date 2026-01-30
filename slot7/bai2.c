#include<stdio.h>
#include<math.h>
int main(){
	float a,b,re;
	int t,ti;
	char pt;
	printf("nhap hai so can tinh toan: ");
	t = scanf("%f",&a);
	ti = scanf(" %f",&b);
	if (t!= 1 || ti !=1){
		printf("brain issue");
		return 0;
	}
	printf("nhap phep tinh: ");
	scanf(" %c",&pt);
	if ( pt != '+' && pt != '-' && pt != '*' && pt != '/' && pt != '%'){
		printf("phep tinh gi day?");
		return 0;
	}
	if (b==0 && (pt == '/' || pt == '%')){
		printf("mien tinh");
		return 0;
	}
	switch (pt){
		case '+':
			re = a+b;
			break;
		case '-':
			re = a-b;
			break;
		case '*':
			re = a*b;
			break;
		case '/':
			re = a/b;
			break;
		case '%':
			re = fmod(a,b);
			break;
	}
	printf("%g %c %g = %g",a,pt,b,re);
	return 0;
}