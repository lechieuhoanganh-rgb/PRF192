#include <stdio.h>

int main() {
    int a, b;
    float c;
    char d;

    printf("nhap a b: ");
    scanf("%d %d", &a, &b);

    printf("nhap phep toan: ");
    scanf(" %c", &d);

    if (d == '+') {
        c = a + b;
        printf("ket qua: %d + %d = %g", a, b, c);
    }
    else if (d == '-') {
        c = a - b;
        printf("ket qua: %d - %d = %g", a, b, c);
    }
    else if (d == '*') {
        c = a * b;
        printf("ket qua: %d * %d = %g", a, b, c);
    }
    else if (d == '/') {
        if (b == 0) {
            printf("phep toan khong hop le");
        } else {
            c = (float)a / b;
            printf("ket qua: %d / %d = %.2f", a, b, c);
        }
    }
    else {
        printf("ban nhap phep toan sai roi");
    }

    return 0;
}
