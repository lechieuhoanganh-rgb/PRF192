#include <stdio.h>
#include <string.h>

// Hàm kiểm tra nguyên âm
int isVowel(char c) {
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
        c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        return 1;
    return 0;
}

// Hàm đếm số nguyên âm trong chuỗi
int countVowel(char str[]) {
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if(isVowel(str[i])) {
            count++;
        }
    }

    return count;
}

int main() {
    char str[100];

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    int result = countVowel(str);

    printf("So nguyen am trong chuoi: %d", result);

    return 0;
}