#include <stdio.h>

int main() {
    int a, b, r;

    printf("Nhap a, b: ");
    scanf("%d %d", &a, &b);

    // Đảm bảo a, b không âm
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    for ( ; b != 0 ; ) {
        r = a % b;
        a = b;
        b = r;
    }

    printf("UCLN = %d", a);

    return 0;
}
