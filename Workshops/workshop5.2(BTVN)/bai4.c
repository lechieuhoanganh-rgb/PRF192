#include <stdio.h>

int main(){
    char s[200];
    int i,count=0;
	printf("nhap cau: \n");
    fgets(s,200,stdin);

    for(i=0;s[i]!='\0';i++)
        if(s[i]!=' ' && (i==0 || s[i-1]==' '))
            count++;//quen ngoac cho chac r-_-

    printf("%d",count);
}