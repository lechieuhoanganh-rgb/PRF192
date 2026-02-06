#include <stdio.h>

int main() {
    int luaChon;
    int soDu = 15000000;   // 15 tri?u
    int soTienRut;

    printf("=== ATM MO PHONG ===\n");

    for (;;) {
        printf("\n----- MENU -----\n");
        printf("1. Rut tien\n");
        printf("2. Xem so du\n");
        printf("0. Thoat\n");
        printf("Chon: ");
        scanf("%d", &luaChon);

        if (luaChon == 1) {
            printf("Nhap so tien muon rut: ");
            scanf("%d", &soTienRut);

            if (soTienRut <= 0) {
                printf("So tien khong hop le!\n");
            }
            else if (soTienRut > soDu) {
                printf("So du khong du. Ket thuc giao dich!\n");
                break;
            }
            else {
                soDu -= soTienRut;
                printf("Rut tien thanh cong!\n");
                printf("So du con lai: %d VND\n", soDu);

                if (soDu == 0) {
                    printf("Tai khoan da het tien. Ket thuc!\n");
                    break;
                }
            }
        }
        else if (luaChon == 2) {
            printf("So du hien tai: %d VND\n", soDu);
        }
        else if (luaChon == 0) {
            printf("Cam on ban da su dung ATM!\n");
            break;
        }
        else {
            printf("Lua chon khong hop le!\n");
        }
    }

    return 0;
}
