#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
    int found = 0;

    for(int i = 0; i < n; i++) {

        // kiểm tra số chẵn
        if(arr[i] % 2 == 0) {
            // kiểm tra đã xuất hiện trước đó chưa
            int printed = 0;
            for(int k = 0; k < i; k++) {
                if(arr[k] == arr[i]) {
                    printed = 1;
                    break;
                }
            }
            if(!printed) {
                int count = 0;
                // đếm tần suất trong mảng
                for(int j = 0; j < n; j++) {
                    if(arr[j] == arr[i]) {
                        count++;
                    }
                }
                printf("%d-%d\n", count, arr[i]);
                found = 1;
            }
        }
    }
    if(!found) {
        printf("Not found\n");
    }  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
