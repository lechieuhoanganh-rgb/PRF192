#include <stdio.h>

int main() {
    char s[100];
    char find, replace;
    int count = 0;
    int i = 0;

    printf("Nhap vao 1 tu:\n");

    scanf("%s", s);
    printf("Nhap vao ki tu can tim:\n");
    scanf(" %c", &find);
    printf("Nhap ki tu thay the:\n");
    scanf(" %c", &replace);

    while(s[i] != '\0'){
        if(s[i] == find){
            s[i] = replace;
            count++;
        }
        i++;
    }//cai nay chi doi dc ki tu dau tien dc nhap vao th
	printf("Result:");
    printf("%d\n", count);
    printf("%s", s);

    return 0;
}