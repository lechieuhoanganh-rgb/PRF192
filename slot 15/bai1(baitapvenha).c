#include <stdio.h>

#define MAX 100 //khai báo giới hạn khai báo là 100, nhằm dễ chỉnh sửa giới hạn

void addValue(int arr[], int *n);
int searchValue(int arr[], int n, int value);
void removeFirst(int arr[], int *n, int value);
void removeAll(int arr[], int *n, int value);
void printArray(int arr[], int n);
void printAscending(int arr[], int n);
void printDescending(int arr[], int n);//tạo, truyền mảng

int main() {//khai báo chính(main menu, kiểm tra giá trị
    int arr[MAX];
    int n = 0;
    int choice, value;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Add a value\n");
        printf("2. Search a value\n");
        printf("3. Remove the first existence of a value\n");
        printf("4. Remove all existences of a value\n");
        printf("5. Print out the array\n");
        printf("6. Print ascending order\n");
        printf("7. Print descending order\n");
        printf("0. Quit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addValue(arr, &n);
                break;

            case 2:
                printf("Enter value to search: ");
                scanf("%d", &value);
                int pos;
                pos = searchValue(arr, n, value);
                if(pos != -1)
                    printf("Found at position %d\n", pos);
                else
                    printf("Not found!\n");
                break;

            case 3:
                printf("Enter value to remove (first): ");
                scanf("%d", &value);
                removeFirst(arr, &n, value);
                break;

            case 4:
                printf("Enter value to remove (all): ");
                scanf("%d", &value);
                removeAll(arr, &n, value);
                break;

            case 5:
                printArray(arr, n);
                break;

            case 6:
                printAscending(arr, n);
                break;

            case 7:
                printDescending(arr, n);
                break;

            case 0:
                printf("Exiting program...\n");//kết thúc chương trình(0)
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 0);

    return 0;
}

void addValue(int arr[], int *n) {//thêm giá trị(1)
    if(*n >= MAX) {
        printf("Array is full!\n");
        return;
    }

    printf("Enter value to add: ");
    scanf("%d", &arr[*n]);
    (*n)++;
}

int searchValue(int arr[], int n, int value) {//tìm giá trị(2)
    for(int i = 0; i < n; i++) {
        if(arr[i] == value)
            return i;
    }
    return -1;
}

void removeFirst(int arr[], int *n, int value) {//loại bỏ giá trị(3)
    int pos = searchValue(arr, *n, value);

    if(pos == -1) {
        printf("Value not found!\n");
        return;
    }

    for(int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*n)--;
    printf("First occurrence removed.\n");
}

void removeAll(int arr[], int *n, int value) {//loại bỏ tất cả giá trị(4)
    int i = 0;
    while(i < *n) {
        if(arr[i] == value) {
            for(int j = i; j < *n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            (*n)--;
        } else {
            i++;
        }
    }
    printf("All occurrences removed.\n");
}

void printArray(int arr[], int n) {//in ra màn hình giá trị nhập vào theo giá trị nhập sau(5)
    if(n == 0) {
        printf("Array is empty.\n");
        return;
    }

    printf("Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void printAscending(int arr[], int n) {//in giá trị theo xu hướng tăng dần(6)
    if(n == 0) {
        printf("Array is empty.\n");
        return;
    }

    int temp[MAX];
    for(int i = 0; i < n; i++)
        temp[i] = arr[i];
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(temp[j] > temp[j+1]) {
                int t = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = t;
            }
        }
    }

    printf("Ascending: ");
    for(int i = 0; i < n; i++)
        printf("%d ", temp[i]);
    printf("\n");
}

void printDescending(int arr[], int n) {//in giá trị theo xu hướng giảm dần(7)
    if(n == 0) {
        printf("Array is empty.\n");
        return;
    }

    int temp[MAX];
    for(int i = 0; i < n; i++)
        temp[i] = arr[i];

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(temp[j] < temp[j+1]) {
                int t = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = t;
            }
        }
    }

    printf("Descending: ");
    for(int i = 0; i < n; i++)
        printf("%d ", temp[i]);
    printf("\n");
}