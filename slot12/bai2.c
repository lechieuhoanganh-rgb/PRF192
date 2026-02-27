#include<stdio.h>

int inputf() {
    int a;
    int check;

    do {
        printf("Nhap so dau tien: ");
        check = scanf("%d", &a);

        if (check != 1) {
            printf("Ban da nhap sai! Vui long nhap so nguyen.\n");
            while (getchar() != '\n'); // xoa bo dem
        }

    } while (check != 1);

    return a;
}

int inputs() {
    int b;
    int check;

    do {
        printf("Nhap so thu hai: ");
        check = scanf("%d", &b);

        if (check != 1) {
            printf("Ban da nhap sai! Vui long nhap so nguyen.\n");
            while (getchar() != '\n'); // xoa bo dem
        }

    } while (check != 1);

    return b;
}

int inputt() {
    int c;
    int check;

    do {
        printf("Nhap n: ");
        check = scanf("%d", &c);

        if (check != 1) {
            printf("Ban da nhap sai! Vui long nhap so nguyen.\n");
            while (getchar() != '\n'); // xoa bo dem
        }

    } while (check != 1);

    return c;
}
int solonnhat(int a, int b, int c){
	int max;
	if (a>=b && a>=c){
		max=a;
		return a;
	}
	else if(b>=a && b>=c){
		max=b;
		return b;
	}
	else if(c>=a && c>=b){
		max=c;
		return c;
	}
}

void result(int a, int b, int c, int count) {
    printf("so lon nhat trong cac so %d, %d, %d la: %d\n",a,b,c, count);
}

int main() {
    int a = inputf();
    int b = inputs();
    int c = inputt();
    int count = solonnhat(a,b,c);
    result(a,b,c, count);

    return 0;
}