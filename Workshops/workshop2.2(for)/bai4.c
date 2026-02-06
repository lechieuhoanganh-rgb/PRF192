#include <stdio.h>

int main() {
    int n, o, d = 0;
    int c;

    printf("Nhap so nguyen n: ");
    for ( ; scanf("%d",&n)!=1 ; ) {
        printf("nhap lai: ");
        while(getchar() != '\n');
    }

    o = n; // giu lai gia tri ban dau

    for ( ; n != 0 ; n /= 10 ) {
        c = n % 10;
        d = d * 10 + c;
    }

    printf("so dao nguoc cua %d la %d", o, d);
    return 0;
}
