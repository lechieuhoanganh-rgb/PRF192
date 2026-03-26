#include <stdio.h>
#include <math.h>

// Hàm kiểm tra số nguyên tố
int laSoNguyenTo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    FILE *fp;
    int n, temp;

    // 1. Ghi dữ liệu vào file
    fp = fopen("baitap2.txt", "w");
    if (fp == NULL) {
        printf("Loi mo file để ghi!");
        return 1;
    }

    printf("Ban muon nhap bao nhieu so: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &temp);
        fprintf(fp, "%d ", temp); // Ghi các số cách nhau bằng khoảng trắng
    }
    fclose(fp);

    // 2. Đọc file và lọc số nguyên tố
    fp = fopen("baitap2.txt", "r");
    if (fp == NULL) {
        printf("Loi mo file để đọc!");
        return 1;
    }

    printf("\nCac so nguyen to co trong file la: ");
    // Dung fscanf de doc tung so nguyen thay vi getc (doc ky tu)
    while (fscanf(fp, "%d", &temp) != EOF) {
        if (laSoNguyenTo(temp)) {
            printf("%d ", temp);
        }
    }

    fclose(fp);
    return 0;
}