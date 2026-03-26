#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Định nghĩa cấu trúc sinh viên
typedef struct {
    int id;
    char name[50];
    float gpa;
} Student;

// Hàm ghi danh sách vào tệp txt
void saveToFile(Student *list, int n) {
    FILE *f = fopen("thongtinsv3.txt", "w");
    if (f == NULL) {
        printf("Khong the mo file de ghi!\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        fprintf(f, "%d|%s|%.2f\n", list[i].id, list[i].name, list[i].gpa);
    }
    fclose(f);
    printf(" Da luu du lieu vao file 'sinhvien.txt'.\n");
}

// Hàm truy xuất sinh viên bằng ID từ file
void searchById(int searchId) {
    FILE *f = fopen("thongtinsv3.txt", "r");
    if (f == NULL) {
        printf("Chua co du lieu file! Hay nhap danh sach truoc.\n");
        return;
    }

    Student temp;
    int found = 0;
    // Đọc từng dòng cho đến hết file
    while (fscanf(f, "%d|%[^|]|%f\n", &temp.id, temp.name, &temp.gpa) != EOF) {
        if (temp.id == searchId) {
            printf("\n Ket qua tim kiem\n");
            printf("ID: %d\nHo ten: %s\nDiem GPA: %.2f\n", temp.id, temp.name, temp.gpa);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien co ID %d.\n", searchId);
    }
    fclose(f);
}

int main() {
    int n, searchId;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    // Cap phat bo nho dong cho mang struct
    Student *list = (Student *)malloc(n * sizeof(Student));

    // Nhap du lieu
    for (int i = 0; i < n; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);
        printf("ID: "); scanf("%d", &list[i].id);
        getchar(); // Xoa bo nho dem
        printf("Ho ten: "); fgets(list[i].name, 50, stdin);
        list[i].name[strcspn(list[i].name, "\n")] = 0; // Xoa ky tu xuong dong
        printf("GPA: "); scanf("%f", &list[i].gpa);
    }

    // Luu vao file
    saveToFile(list, n);

    // Truy xuat
    printf("\nNhap ID sinh vien can tim: ");
    scanf("%d", &searchId);
    searchById(searchId);

    // Giai phong bo nho
    free(list);
    return 0;
}