#include<stdio.h>
#include<math.h>
int main(){
	//em muốn mờ rộng đề bài tí nên em thay float làm input thay vì int
	float a,b,re;
	int t,ti;
	char pt;
	printf("nhap hai so can tinh toan: ");
	t = scanf("%f",&a);
	ti = scanf(" %f",&b);
	if (t!= 1 || ti !=1){
		printf("brain issue");//lệnh khô quá nên em viết lại cho vui xíu
		return 0;
	}
	printf("nhap phep tinh: ");
	scanf(" %c",&pt);
	if ( pt != '+' && pt != '-' && pt != '*' && pt != '/' && pt != '%'){
		printf("phep tinh gi day?");//này cũng vậy ạ:>
		return 0;
	}
	if (b==0 && (pt == '/' || pt == '%')){
		printf("mien tinh");// và đây nữa
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