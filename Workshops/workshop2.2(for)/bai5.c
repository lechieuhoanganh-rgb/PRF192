#include <stdio.h>

int main() {
    int n;
    int tpre = 0;
    int a = 0;
    int t;

    for (t = 1; ; t++) {
        printf("nhap so nguyen duong thu %d: ", t);

        for ( ; scanf("%d",&n)!=1 || n<0 ; ) {
            printf("nhap lai: ");
            while(getchar() != '\n');
        }

        a += n;
        printf("so thu %d cong voi so thu %d co tong la: %d\n", t, tpre, a);

        tpre = t;

        if (n == 0) break;
    }

    return 0;
}
