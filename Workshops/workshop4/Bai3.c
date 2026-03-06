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
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input");
        return 0;
    }
    int arr[n];
    int even[n];
    int count = 0;
    // nhập mảng
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // lọc số chẵn
        if (arr[i] % 2 == 0) {
            even[count] = arr[i];
            count++;
        }
    }
    // sắp xếp giảm dần
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (even[i] < even[j]) {
                int temp = even[i];
                even[i] = even[j];
                even[j] = temp;
            }
        }
    }
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
    for (int i = 0; i < count; i++) {
    	printf("%d\n", even[i]);
    }
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
