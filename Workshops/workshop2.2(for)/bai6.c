#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    double n;
    int integerPart;
    double fractionalPart;
    int binaryInt[32], i = 0;
    char input[100];
    char *endptr;

    // Nh?p s? th?c
    for (;;) {//empty field applied resource bf break
        printf("Nhap mot so thuc: ");
        fgets(input, sizeof(input), stdin);

        input[strcspn(input, "\n")] = '\0';

        n = strtod(input, &endptr);
        if (*endptr == '\0') {
            break;
        }
    }

    // Ki?m tra s? âm
    int isNegative = 0;
    if (n < 0) {
        isNegative = 1;
        n = -n;
    }

    integerPart = (int)n;
    fractionalPart = n - integerPart;

    // Chuy?n ph?n nguyên
    printf("He nhi phan: ");
    if (isNegative) printf("-");

    if (integerPart == 0) {
        printf("0");
    } else {
        for ( ; integerPart > 0 ; integerPart /= 2) {
            binaryInt[i++] = integerPart % 2;
        }
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binaryInt[j]);
        }
    }

    // Chuy?n ph?n th?p phân
    if (fractionalPart > 0) {
        printf(".");
        for (int k = 0; k < 10; k++) {
            fractionalPart *= 2;
            int bit = (int)fractionalPart;
            printf("%d", bit);
            fractionalPart -= bit;
        }
    }

    printf("\n");
    return 0;
}
