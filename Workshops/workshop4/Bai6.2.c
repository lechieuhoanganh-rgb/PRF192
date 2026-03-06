#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * Filters the string to keep only vowel characters.
 * @param str: The input string to be processed in-place.
 */
int isVowel(char c){
    c = tolower(c);
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}

void filterString(char s[]){
    int i,j=0;
    for(i=0;s[i]!='\0';i++)
        if(isVowel(s[i]))
            s[j++] = s[i];
    s[j]='\0';
}

int main() {
    system("cls");
    char input[101]; // 100 ký tự + 1 cho null terminator
    printf("INPUT:\n");
    fgets(input,101,stdin);
    filterString(input);
    printf("OUTPUT:\n");
	printf("%s",input);
    //--FIXED PART
    printf("\n");
    system("pause");
    return(0);
}