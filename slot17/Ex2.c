#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char str[100];
  int length = 0;

  // Nhập chuỗi bao gồm cả khoảng trắng
  scanf("%[^\n]", str);

  // Bước 1: Tìm độ dài chuỗi thủ công
  while (str[length] != '\0') {
      length++;
  }

  // Bước 2: Đảo ngược mảng trực tiếp (In-place reversal)
  int start = 0;
  int end = length - 1;
  char temp;

  while (start < end) {
      // Hoán đổi giá trị giữa str[start] và str[end]
      temp = str[start];
      str[start] = str[end];
      str[end] = temp;

      // Di chuyển các chỉ số vào giữa
      start++;
      end--;
  }

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  // Lúc này mảng str đã bị thay đổi nội dung, ta in xuôi như bình thường
  printf("%s", str);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}