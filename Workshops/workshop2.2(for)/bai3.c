#include <stdio.h>

int main() {
    int n, kq;
    int count;

    printf("nhap so ban muon lam bang cuu chuong: ");
    for ( ; scanf("%d",&n)!=1 || n<0 || n<=10 ; ) {
        printf("nhap lai: ");
        scanf("%d",&n);
        while(getchar() != '\n');
    }

    for (count = 1; count <= 10; count++) {
        kq = n * count;
        printf("%d * %d = %d\n", n, count, kq);
    }

    return 0;
}
