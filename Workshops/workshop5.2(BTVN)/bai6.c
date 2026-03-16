#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char name[10][50];
    char temp[50];

    printf("Nhap vao so luong ten:\n");
    scanf("%d", &n);
	printf("\n Cac ten nhap vao:\n");
    for(int i = 0; i < n; i++){
        scanf("%s", name[i]);
    }

    // S?p x?p A-Z
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(strcmp(name[i], name[j]) > 0){
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("\nPhan cap bac (A-Z):\n");

    for(int i = 0; i < n; i++){
        printf("%s\n", name[i]);
    }

    return 0;
}