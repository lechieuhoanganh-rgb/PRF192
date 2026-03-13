#include <stdio.h>

// kiểm tra nguyên âm
int isVowel(char c) {
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
        c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        return 1;
    return 0;
}

// đếm nguyên âm
int countVowel(char *str) {
    int count = 0;

    while (*str != '\0') {
        if (isVowel(*str))
            count++;
        str++;   // di chuyển con trỏ sang ký tự tiếp theo
    }

    return count;
}

int main() {
    char str[100];
    char *p = str;

    printf("Nhap chuoi: ");
    fgets(str, 100, stdin);

    int result = countVowel(p);

    printf("So nguyen am: %d", result);

    return 0;
}