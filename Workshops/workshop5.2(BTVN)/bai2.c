#include <stdio.h>

int main(){
    char s[100];
    int i=0;
	printf("Nhap: ");
    fgets(s,100,stdin);

    while(s[i] != '\0' && s[i] != '\n') i++;

    for(int j=i-1;j>=0;j--)
        printf("%c",s[j]);

    return 0;
}