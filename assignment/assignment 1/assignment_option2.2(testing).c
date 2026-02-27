#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 50
#define MAX_RECORDS 1000
#define FILENAME "students.txt"

typedef struct {
    int id;
    char firstName[MAX_NAME_LEN];
    char lastName[MAX_NAME_LEN];
    float gpa;
} Student;

/* ================= ADD ================= */
void addStudent(const char *filename) {
    FILE *file = fopen(filename, "a");
    if (!file) {
        printf("Error opening file!\n");
        return;
    }

    Student s;

    printf("Enter Student ID: ");
    if (scanf("%d", &s.id) != 1) {
        printf("Invalid ID!\n");
        while (getchar() != '\n');
        fclose(file);
        return;
    }

    printf("Enter First Name: ");
    scanf("%49s", s.firstName);

    printf("Enter Last Name: ");
    scanf("%49s", s.lastName);

    printf("Enter GPA: ");
    if (scanf("%f", &s.gpa) != 1) {
        printf("Invalid GPA!\n");
        while (getchar() != '\n');
        fclose(file);
        return;
    }

    fprintf(file, "%d,%s,%s,%.2f\n",
            s.id, s.firstName, s.lastName, s.gpa);

    fclose(file);
    printf("Student added successfully.\n");
}

/* ================= DISPLAY ================= */
void displayStudents(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("No student records found!\n");
        return;
    }

    Student s;

    printf("\n-------------------------------------------------\n");
    printf("%-10s %-15s %-15s %-5s\n",
           "ID", "First Name", "Last Name", "GPA");
    printf("-------------------------------------------------\n");

    while (fscanf(file, "%d,%49[^,],%49[^,],%f",
                  &s.id, s.firstName, s.lastName, &s.gpa) == 4) {

        printf("%-10d %-15s %-15s %-5.2f\n",
               s.id, s.firstName, s.lastName, s.gpa);
    }

    printf("-------------------------------------------------\n");

    fclose(file);
}

/* ================= SEARCH BY ID ================= */
void searchStudentById(const char *filename) {
    int id;
    printf("Enter ID to search: ");
    scanf("%d", &id);

    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("File not found!\n");
        return;
    }

    Student s;
    int found = 0;

    while (fscanf(file, "%d,%49[^,],%49[^,],%f",
                  &s.id, s.firstName, s.lastName, &s.gpa) == 4) {

        if (s.id == id) {
            printf("\nStudent Found:\n");
            printf("ID: %d\n", s.id);
            printf("First Name: %s\n", s.firstName);
            printf("Last Name: %s\n", s.lastName);
            printf("GPA: %.2f\n", s.gpa);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found!\n");

    fclose(file);
}

/* ================= SORT ================= */
void sortStudentsByLastName(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("File not found!\n");
        return;
    }

    Student students[MAX_RECORDS];
    int count = 0;

    while (count < MAX_RECORDS &&
           fscanf(file, "%d,%49[^,],%49[^,],%f",
                  &students[count].id,
                  students[count].firstName,
                  students[count].lastName,
                  &students[count].gpa) == 4) {
        count++;
    }

    fclose(file);

    // Bubble Sort
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (strcmp(students[j].lastName,
                       students[j + 1].lastName) > 0) {

                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    file = fopen(filename, "w");
    if (!file) {
        printf("Error writing file!\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%d,%s,%s,%.2f\n",
                students[i].id,
                students[i].firstName,
                students[i].lastName,
                students[i].gpa);
    }

    fclose(file);
    printf("Sorted successfully.\n");
}

/* ================= MAIN MENU ================= */
int main() {
    int choice;

    do {
        printf("\n===== STUDENT MANAGEMENT =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search by ID\n");
        printf("4. Sort by Last Name\n");
        printf("0. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(FILENAME); break;
            case 2: displayStudents(FILENAME); break;
            case 3: searchStudentById(FILENAME); break;
            case 4: sortStudentsByLastName(FILENAME); break;
            case 0: printf("Goodbye!\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while (choice != 0);

    return 0;
}