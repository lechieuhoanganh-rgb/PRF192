#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct{
	int id;
	char name[200];
	float price; 
}Book;
int main() {
  system("cls");
  printf("INPUT:\n");
  
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int n;
    printf("Nhap so luong sach: ");
    scanf("%d", &n);

    Book ds[n];  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (int i = 0; i < n; i++) {
        printf("\nSach %d:\n", i + 1);

        printf("Nhap id: ");
        scanf("%d", &ds[i].id);

        getchar(); // xóa bộ đệm

        printf("Nhap ten: ");
        fgets(ds[i].name, sizeof(ds[i].name), stdin);
        ds[i].name[strcspn(ds[i].name, "\n")] = '\0';
        printf("Nhap gia: ");
        scanf("%f", &ds[i].price);
    }

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].price > ds[j].price) {
                Book temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }

    printf("\nDanh sach sau khi sap xep (gia tang dan):\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d | Ten: %s | Gia: %.2f\n",
               ds[i].id, ds[i].name, ds[i].price);
    }

    
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (ds[i].price > ds[maxIndex].price) {
            maxIndex = i;
        }
    }

    printf("\nSach co gia cao nhat:\n");
    printf("ID: %d\n", ds[maxIndex].id);
    printf("Ten: %s\n", ds[maxIndex].name);
    printf("Gia: %.2f\n", ds[maxIndex].price);
    int findId;
    printf("\nNhap id can tim: ");
    scanf("%d", &findId);

    int found = 0;

    for (int i = 0; i < n; i++) {
        if (ds[i].id == findId) {
            printf("\nTim thay:\n");
            printf("ID: %d\n", ds[i].id);
            printf("Ten: %s\n", ds[i].name);
            printf("Gia: %.2f\n", ds[i].price);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Not found\n");
    }
 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}