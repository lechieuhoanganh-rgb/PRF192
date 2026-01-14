#include<stdio.h>
int main(){
	char kt = 'a';
     // Dòng tên kiểm soát khoảng cách
    printf("%-10s %-10s %-10s %-10s %-10s %-10s\n","ten bien", "gia tri", "dec", "hex", "oct", "size");
    // Dòng giá trị chuẩn vói khoảng cách đầu dòng
    printf("%-10s %-10c %-10d %-10x %-10o %-10zu\n","kt", kt, kt, kt, kt,sizeof(kt));
	return 0;
}