#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main() {
    double n;
    int integerPart;
    double fractionalPart;
    int binaryInt[32], i = 0;
    char input[100];
    char *endptr;
	
    while (1) {
        printf("Nhap mot so thuc: ");
        fgets(input, sizeof(input), stdin);

        // Xóa ký tự xuống dòng nếu có
        input[strcspn(input, "\n")] = '\0';

        // Dùng strtod để kiểm tra
        n = strtod(input, &endptr);
        if (*endptr == '\0') {
            break; // thoát vòng lặp khi nhập đúng
    	}
	}

    // Kiểm tra dấu âm
    int isNegative = 0;
    if (n < 0) {
        isNegative = 1;
        n = -n; // lấy trị tuyệt đối để xử lý
    }

    // Tách phần nguyên và phần thập phân
    integerPart = (int)n;
    fractionalPart = n - integerPart;

    // --- Chuyển phần nguyên ---
    if (integerPart == 0) {
        printf("He nhi phan: ");
        if (isNegative) printf("-");
        printf("0");
    } else {
        while (integerPart > 0) {
            binaryInt[i++] = integerPart % 2;
            integerPart /= 2;
        }
        printf("He nhi phan: ");
        if (isNegative) printf("-");
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binaryInt[j]);
        }
    }

    // --- Chuyển phần thập phân ---
    if (fractionalPart > 0) {
        printf(".");
        for (int k = 0; k < 10; k++) { // lấy 10 chữ số nhị phân sau dấu chấm
            fractionalPart *= 2;
            int bit = (int)fractionalPart;
            printf("%d", bit);
            fractionalPart -= bit;
        }//phan nay em luoi xu ly qua:>
    }

    printf("\n");
    return 0;
}
