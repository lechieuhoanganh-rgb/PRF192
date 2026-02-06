#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char input[100];
    int i, isNumber = 1;
    int n;

    printf("Nhap so: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    for (i = 0; input[i] != '\0'; i++) {
        if (i == 0 && (input[i] == '+' || input[i] == '-')) {
            continue;
        }
        if (!isdigit((unsigned char)input[i])) {
            isNumber = 0;
            break;
        }
    }

    if (!isNumber) {
        printf("Gia tri nhap vao khong phai la so nguyen");
        return 0;
    }

    n = atoi(input);

    int c = 1, d;

    if (n == 0 || n == 1) {
        printf("%d la so chinh phuong", n);
    } else {
        for (c = 1; ; c++) {
            d = c * c;
            if (d == n) {
                printf("%d la so chinh phuong", n);
                break;
            } else if (d > n) {
                printf("%d khong phai la so chinh phuong", n);
                break;
            }
        }
    }

    return 0;
}
