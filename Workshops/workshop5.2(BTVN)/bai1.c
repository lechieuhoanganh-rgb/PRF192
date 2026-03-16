#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    while(str[count] != '\0' && str[count] != '\n'){
        count++;
    }

    printf("Tong ki tu: %d", count);

    return 0;
}