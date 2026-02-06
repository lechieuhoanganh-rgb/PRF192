#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b;

    srand(time(NULL));

    a = rand() % 100 + 1;

    printf("=== GAME DOAN SO ===\n");
    printf("May da chon 1 so tu 1 den 100\n");

    for (;;) {
        printf("Nhap so ban doan: ");
        scanf("%d", &b);

        if (b < a) {
            printf("Lon hon!\n");
        } 
        else if (b > a) {
            printf("Nho hon!\n");
        } 
        else {
            printf("Chuc mung! Ban da doan dung \n");
            break;
        }
    }

    return 0;
}
