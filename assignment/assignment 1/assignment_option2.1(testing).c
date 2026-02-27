#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    int id;
    char name[50];
    float score;
} Student;

Student list[MAX];
int count = 0;

/* ================== CLEAR BUFFER ================== */
void clearBuffer() {
    while (getchar() != '\n');
}

/* ================== INPUT INT SAFE ================== */
int inputInt() {
    int x;
    while (1) {
        if (scanf("%d", &x) != 1) {
            printf("Nhap sai! Vui long nhap so: ");
            clearBuffer();
        } else {
            clearBuffer();
            return x;
        }
    }
}

/* ================== INPUT FLOAT SAFE ================== */
float inputFloat() {
    float x;
    while (1) {
        if (scanf("%f", &x) != 1) {
            printf("Nhap sai! Vui long nhap so: ");
            clearBuffer();
        } else {
            clearBuffer();
            return x;
        }
    }
}

/* ================== ADD ================== */
void addStudent() {
    if (count >= MAX) {
        printf("Danh sach day!\n");
        return;
    }

    printf("Nhap ID: ");
    list[count].id = inputInt();

    printf("Nhap ten: ");
    fgets(list[count].name, sizeof(list[count].name), stdin);
    list[count].name[strcspn(list[count].name, "\n")] = 0;

    printf("Nhap diem: ");
    list[count].score = inputFloat();

    count++;
    printf("Them thanh cong!\n");
}

/* ================== SHOW ================== */
void showStudents() {
    if (count == 0) {
        printf("Danh sach rong!\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("\nID: %d", list[i].id);
        printf("\nTen: %s", list[i].name);
        printf("\nDiem: %.2f\n", list[i].score);
    }
}

/* ================== DELETE ================== */
void deleteStudent() {
    int id;
    printf("Nhap ID can xoa: ");
    id = inputInt();

    for (int i = 0; i < count; i++) {
        if (list[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                list[j] = list[j + 1];
            }
            count--;
            printf("Xoa thanh cong!\n");
            return;
        }
    }

    printf("Khong tim thay!\n");
}

/* ================== MODIFY ================== */
void modifyStudent() {
    int id;
    printf("Nhap ID can sua: ");
    id = inputInt();

    for (int i = 0; i < count; i++) {
        if (list[i].id == id) {

            printf("Nhap ten moi: ");
            fgets(list[i].name, sizeof(list[i].name), stdin);
            list[i].name[strcspn(list[i].name, "\n")] = 0;

            printf("Nhap diem moi: ");
            list[i].score = inputFloat();

            printf("Sua thanh cong!\n");
            return;
        }
    }

    printf("Khong tim thay!\n");
}

/* ================== MENU ================== */
int main() {
    int choice;

    while (1) {
        printf("\n===== MENU =====\n");
        printf("1. Them hoc sinh\n");
        printf("2. Hien thi danh sach\n");
        printf("3. Sua hoc sinh\n");
        printf("4. Xoa hoc sinh\n");
        printf("0. Thoat\n");
        printf("Chon: ");

        choice = inputInt();

        switch (choice) {
            case 1: addStudent(); break;
            case 2: showStudents(); break;
            case 3: modifyStudent(); break;
            case 4: deleteStudent(); break;
            case 0: return 0;
            default: printf("Lua chon khong hop le!\n");
        }
    }
}