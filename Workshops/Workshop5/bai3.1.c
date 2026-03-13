#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    char temp;

    while (left < right) {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

int main() {
    char str[100];

    printf("Nhap chuoi: ");
    fgets(str, 100, stdin);

    reverseString(str);

    printf("Chuoi dao nguoc: %s", str);

    return 0;
}