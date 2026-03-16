#include <stdio.h>

int main() {
    char s[200];
    int digit = 0, letter = 0, other = 0;
    int i = 0;

    printf("Nhap tat ca:\n");
    fgets(s, sizeof(s), stdin);

    while(s[i] != '\0'){
        if(s[i] >= '0' && s[i] <= '9')
            digit++;
        else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            letter++;
        else if(s[i] != '\n')
            other++;

        i++;
    }

    printf("\nPhan loai va dem:\n");
    printf("%d\n", digit);
    printf("%d\n", letter);
    printf("%d", other);

    return 0;
}