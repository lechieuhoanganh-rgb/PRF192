#include <stdio.h>

int main(){
    char s[100];
    int i=0,len=0;
	printf("Nhap de kiem tra chuoi palindrome\n");
    scanf("%s",s);

    while(s[len]!='\0') len++;

    for(i=0;i<len/2;i++)
        if(s[i]!=s[len-1-i]){
            printf("No");
            return 0;
        }

    printf("Yes");
}