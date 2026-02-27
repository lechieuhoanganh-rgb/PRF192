#include <stdio.h>

// In hàng chữ A -> Z
void inChuCai() {
    char c;
    for (c = 'A'; c <= 'Z'; c++) {
        printf("%4c", c);   // căn đều 4 ký tự cho đẹp
    }
    printf("\n");
}

// In hàng mã ASCII tương ứng
void inMaASCII() {
    char c;
    for (c = 'A'; c <= 'Z'; c++) {
        printf("%4d", c);
    }
    printf("\n");
}

// Hàm tiêu đề
void tieuDe() {
    printf("Bang ma ASCII tu A den Z\n");
    printf("----------------------------------------------\n");
}

// Main
int main() {
    tieuDe();
    inChuCai();
    inMaASCII();
    return 0;
}