#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[30];
    float grade;
} sinhvien;

int main() {
    FILE *fp;
    int n;

    // 1. NHẬP VÀ GHI FILE
    fp = fopen("thongtinsv2.txt", "w");
    if (fp == NULL) return 1;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    
    sinhvien infor[n];

    for (int i = 0; i < n; i++) {
        printf("\n--- Nhap SV thu %d ---\n", i + 1);
        printf("ID: ");
        scanf("%d", &infor[i].id);
        
        getchar(); // Xóa bộ đệm
        printf("Ten: ");
        fgets(infor[i].name, sizeof(infor[i].name), stdin);
        infor[i].name[strcspn(infor[i].name, "\n")] = 0;

        printf("Diem: ");
        scanf("%f", &infor[i].grade);

        fprintf(fp, "%d\n%s\n%.2f\n", infor[i].id, infor[i].name, infor[i].grade);
    }
    fclose(fp);

    // 2. ĐỌC FILE VÀ IN BẢNG CĂN CHUẨN
    fp = fopen("thongtinsv2.txt", "r");
    if (fp == NULL) return 1;

    printf("\n\n================ DANH SACH SINH VIEN ================\n");
    // Tiêu đề bảng: STT (5), ID (10), Ten (25), Diem (8)
    printf("%-5s %-10s %-25s %-8s\n", "STT", "ID SV", "HO VA TEN", "DIEM");
    printf("-----------------------------------------------------\n");
    
    sinhvien temp;
    int count = 1;
    while (fscanf(fp, "%d\n", &temp.id) != EOF) {
        fgets(temp.name, sizeof(temp.name), fp);
        temp.name[strcspn(temp.name, "\n")] = 0;
        fscanf(fp, "%f\n", &temp.grade);

        // In từng dòng dữ liệu khớp với độ rộng tiêu đề
        printf("%-5d %-10d %-25s %-8.2f\n", count++, temp.id, temp.name, temp.grade);
    }
    printf("-----------------------------------------------------\n");

    fclose(fp);
    return 0;
}