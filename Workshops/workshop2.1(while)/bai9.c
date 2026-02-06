#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b;

    // Khởi tạo seed cho số ngẫu nhiên
    srand(time(NULL));

    // Máy chọn số từ 1 đến 100
    a = rand() % 100 + 1;//rand() chinh la random % value lay so

    printf("=== GAME DOAN SO ===\n");//cai nay em lay y tuong chatgpt cho dep
    printf("May da chon 1 so tu 1 den 100\n");

    while (1) {
        printf("Nhap so ban doan: ");
        scanf("%d", &b);

        if (b < a) {
            printf("Lon hon!\n");
        } 
        else if (a > b) {
            printf("Nho hon!\n");
        } 
        else {
            printf("Chuc mung! Ban da doan dung \n");
            break;
        }
    }

    return 0;
}
