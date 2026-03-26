#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 50
#define MAX_RECORDS 100

// Định nghĩa cấu trúc sinh viên theo yêu cầu
typedef struct {
    int id;
    char firstName[MAX_NAME_LEN];
    char lastName[MAX_NAME_LEN];
    float gpa;
} Student;

void trimNewline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

// Khai báo các hàm (Prototypes)
void addStudent(const char *filename);
void displayStudents(const char *filename);
void searchStudentById(const char *filename, int id);
void searchStudentByLastName(const char *filename, const char *lastName);
void sortStudentsByLastName(const char *filename);

int main() {
    const char *filename = "students.txt";
    int choice, id;
    char lastName[MAX_NAME_LEN];

    do {
        printf("\n Student Management System \n");
        printf("1. Add Student\n");
        printf("2. Search Student by ID\n");
        printf("3. Search Student by Last Name\n");
        printf("4. Display Students Sorted by Last Name\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        
        // Kiểm tra đầu vào hợp lệ cho choice
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while(getchar() != '\n'); // Xóa bộ đệm
            continue;
        }

        switch (choice) {
            case 1:
                addStudent(filename);
                break;
            case 2:
                printf("Enter Student ID to search: ");
                scanf("%d", &id);
                searchStudentById(filename, id);
                break;
            case 3:
                printf("Enter Last Name to search: ");
                scanf("%s", lastName);
                searchStudentByLastName(filename, lastName);
                break;
            case 4:
                sortStudentsByLastName(filename);
                displayStudents(filename);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

// 1. Thêm sinh viên mới (Ghi thêm vào cuối file)
void addStudent(const char *filename) {
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Could not open file!\n");
        return;
    }
    Student s;
    char buffer[100]; // Bộ đệm tạm thời để nhập dữ liệu

    printf("\n--- Add New Student ---\n");

    // Xóa bộ đệm cũ còn sót lại từ Menu (quan trọng trước khi dùng fgets lần đầu)
    while (getchar() != '\n'); 

    // 1. Nhập ID (Dùng fgets rồi chuyển sang số)
    printf("Enter ID: ");
    fgets(buffer, sizeof(buffer), stdin);
    s.id = atoi(buffer); // Chuyển chuỗi thành số nguyên

    // 2. Nhập First Name
    printf("Enter First Name: ");
    fgets(s.firstName, sizeof(s.firstName), stdin);
    trimNewline(s.firstName); // Xóa \n ở cuối

    // 3. Nhập Last Name
    printf("Enter Last Name: ");
    fgets(s.lastName, sizeof(s.lastName), stdin);
    trimNewline(s.lastName); // Xóa \n ở cuối

    // 4. Nhập GPA (Dùng fgets rồi chuyển sang số thực)
    printf("Enter GPA: ");
    fgets(buffer, sizeof(buffer), stdin);
    s.gpa = atof(buffer); // Chuyển chuỗi thành số thực (float)

    // Lưu vào file theo đúng định dạng
    fprintf(file, "%d,%s,%s,%.2f\n", s.id, s.firstName, s.lastName, s.gpa);
    
    fclose(file);
    printf("Student added successfully!\n");
}

// 2. Hiển thị danh sách sinh viên dưới dạng bảng
void displayStudents(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("File is empty or does not exist.\n");
        return;
    }

    Student s;
    printf("\n%-5s %-15s %-15s %-5s\n", "ID", "First Name", "Last Name", "GPA");
    printf("--------------------------------------------------\n");

    // Đọc định dạng có dấu phẩy bằng fscanf
    while (fscanf(file, "%d,%[^,],%[^,],%f\n", &s.id, s.firstName, s.lastName, &s.gpa) == 4) {
        printf("%-5d %-15s %-15s %-5.2f\n", s.id, s.firstName, s.lastName, s.gpa);
    }

    fclose(file);
}

// 3. Tìm kiếm theo ID
void searchStudentById(const char *filename, int id) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) return;

    Student s;
    int found = 0;
    while (fscanf(file, "%d,%[^,],%[^,],%f\n", &s.id, s.firstName, s.lastName, &s.gpa) == 4) {
        if (s.id == id) {
            printf("Found: %d - %s %s - GPA: %.2f\n", s.id, s.firstName, s.lastName, s.gpa);
            found = 1;
            break;
        }
    }
    if (!found) printf("Student with ID %d not found.\n", id);
    fclose(file);
}

// 4. Tìm kiếm theo Last Name
void searchStudentByLastName(const char *filename, const char *lastName) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) return;

    Student s;
    int found = 0;
    while (fscanf(file, "%d,%[^,],%[^,],%f\n", &s.id, s.firstName, s.lastName, &s.gpa) == 4) {
        // So sánh chuỗi không phân biệt hoa thường (tùy chọn) hoặc chính xác
        if (strcmp(s.lastName, lastName) == 0) {
            printf("Found: %d - %s %s - GPA: %.2f\n", s.id, s.firstName, s.lastName, s.gpa);
            found = 1;
        }
    }
    if (!found) printf("No student with last name '%s' found.\n", lastName);
    fclose(file);
}

// 5. Sắp xếp sinh viên theo Last Name (Bubble Sort)
void sortStudentsByLastName(const char *filename) {
    Student list[MAX_RECORDS];
    int count = 0;

    // Đọc tất cả vào mảng
    FILE *file = fopen(filename, "r");
    if (file == NULL) return;
    while (count < MAX_RECORDS && fscanf(file, "%d,%[^,],%[^,],%f\n", 
           &list[count].id, list[count].firstName, list[count].lastName, &list[count].gpa) == 4) {
        count++;
    }
    fclose(file);

    // Sắp xếp nổi bọt (Bubble Sort)
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (strcmp(list[j].lastName, list[j+1].lastName) > 0) {
                Student temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }

    // Ghi lại toàn bộ mảng đã sắp xếp đè vào file
    file = fopen(filename, "w"); // "w" sẽ xóa trắng file cũ để ghi mới
    for (int i = 0; i < count; i++) {
        fprintf(file, "%d,%s,%s,%.2f\n", list[i].id, list[i].firstName, list[i].lastName, list[i].gpa);
    }
    fclose(file);
    printf("Records sorted by last name successfully.\n");
}