#include<stdio.h>
#include<math.h>

int input(){
	int n;
	printf("Nhap so tu nhien: ");
	while (scanf("%d",&n)!=1){
		printf("Nhap lai: ");
		while (getchar() !='n');
	}
	return n;
}
int is_prime(int n) {
    if (n < 2)
        return 0;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
void output(int n, int check){
	if (check==1){
		printf("%d la so nguyen to",n);
	}
	else{
		printf("%d khong phai la so nguyen to",n);
	}
}
int main(){
	int n = input();
	output(n,is_prime(n));
	return 0;
}