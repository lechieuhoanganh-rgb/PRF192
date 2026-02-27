#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void show_menu() {
    printf("\n---v^v^v^v^ MAY TINH BO TUI ^v^v^v^v---\n");
    printf("1. Cong (+)\n");
    printf("2. Tru (-)\n");
    printf("3. Nhan (*)\n");
    printf("4. Chia (/)\n");
    printf("0. Thoat\n");
    printf("Chon: ");
}

void processor() {
    int choice;
    float a, b;

    do {
        show_menu();
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Nhap hai so(<num1> <space> <num2>): ");
            scanf("%f %f", &a, &b);
        }

        switch (choice) {
            case 1:
                printf("Ket qua: %.2f\n", a + b);
                break;
            case 2:
                printf("Ket qua: %.2f\n", a - b);
                break;
            case 3:
                printf("Ket qua: %.2f\n", a * b);
                break;
            case 4:
                if (b != 0)
                    printf("Ket qua: %.2f\n", a / b);
                else
                    printf("Khong the chia cho 0!\n");
                break;
            case 0:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }

    } while (choice != 0);
}

int main(){
	processor();
	return 0;
}