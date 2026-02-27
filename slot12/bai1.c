#include <stdio.h>

int input() {
    int n;
    int check;

    do {
        printf("Nhap n (n > 0): ");
        check = scanf("%d", &n);

        if (check != 1) {
            printf("Nhap sai dinh dang!\n");
            while (getchar() != '\n');
        } 
        else if (n <= 0) {
            printf("Phai nhap so duong!\n");
        }

    } while (check != 1 || n <= 0);

    return n;
}

int uocso(int n) {
    int count = 0;
    int i;

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    return count;
}

void result(int n, int count) {
    printf("Tong cac uoc so cua %d la: %d\n", n, count);
}

int main() {
    int n = input();
    int count = uocso(n);
    result(n, count);

    return 0;
}