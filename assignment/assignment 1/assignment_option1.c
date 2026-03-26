#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Định nghĩa cấu trúc cho thông tin sản phẩm
struct Product {
    int product_id;
    char product_name[50];
    float price;
    int quantity;
};

// Khai báo các hàm (Prototypes)
void writeProducts(const char *filename, int numProducts);
void appendProducts(const char *filename, int numProducts);
void readProducts(const char *filename);
void modifyProduct(const char *filename);

int main() {
    const char *filename = "products.bin";
    int choice, numProducts;

    do {
        printf("\n-- Product Management System --\n");
        printf("1. Write Products (Ghi moi)\n");
        printf("2. Append Products (them)\n");
        printf("3. Read Products (doc danh sach)\n");
        printf("4. Modify Product (Sua san pham)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number of products to write: ");
                scanf("%d", &numProducts);
                writeProducts(filename, numProducts);
                break;
            case 2:
                printf("Enter the number of products to append: ");
                scanf("%d", &numProducts);
                appendProducts(filename, numProducts);
                break;
            case 3:
                readProducts(filename);
                break;
            case 4:
                modifyProduct(filename);
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

// 1. Hàm ghi mới danh sách sản phẩm (Xóa file cũ nếu có)
void writeProducts(const char *filename, int numProducts) {
    FILE *file = fopen(filename, "wb"); // wb: write binary
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    struct Product p;
    for (int i = 0; i < numProducts; i++) {
        printf("\nProduct %d:\n", i + 1);
        printf("ID: "); scanf("%d", &p.product_id);
        printf("Name: "); scanf(" %[^\n]", p.product_name); // Đọc chuỗi có khoảng trắng
        printf("Price: "); scanf("%f", &p.price);
        printf("Quantity: "); scanf("%d", &p.quantity);

        fwrite(&p, sizeof(struct Product), 1, file);
    }
    fclose(file);
    printf("Successfully written to file.\n");
}

// 2. Hàm ghi thêm sản phẩm vào cuối file
void appendProducts(const char *filename, int numProducts) {
    FILE *file = fopen(filename, "ab"); // ab: append binary
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    struct Product p;
    for (int i = 0; i < numProducts; i++) {
        printf("\nEnter details for new product:\n");
        printf("ID: "); scanf("%d", &p.product_id);
        printf("Name: "); scanf(" %[^\n]", p.product_name);
        printf("Price: "); scanf("%f", &p.price);
        printf("Quantity: "); scanf("%d", &p.quantity);

        fwrite(&p, sizeof(struct Product), 1, file);
    }
    fclose(file);
    printf("Successfully appended to file.\n");
}

// 3. Hàm đọc và hiển thị danh sách sản phẩm
void readProducts(const char *filename) {
    FILE *file = fopen(filename, "rb"); // rb: read binary
    if (file == NULL) {
        printf("No data found or file does not exist.\n");
        return;
    }

    struct Product p;
    printf("\n--- Product List ---\n");
    printf("%-5s %-20s %-10s %-10s\n", "ID", "Name", "Price", "Qty");
    
    // Đọc cho đến khi hết file
    while (fread(&p, sizeof(struct Product), 1, file)) {
        printf("%-5d %-20s %-10.2f %-10d\n", p.product_id, p.product_name, p.price, p.quantity);
    }
    fclose(file);
}

// 4. Hàm sửa đổi thông tin sản phẩm theo ID
void modifyProduct(const char *filename) {
    FILE *file = fopen(filename, "rb+"); // rb+: read and write binary
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    int targetID, found = 0;
    printf("Enter Product ID to modify: ");
    scanf("%d", &targetID);

    struct Product p;
    while (fread(&p, sizeof(struct Product), 1, file)) {
        if (p.product_id == targetID) {
            found = 1;
            printf("Found! Enter new details:\n");
            printf("New Name: "); scanf(" %[^\n]", p.product_name);
            printf("New Price: "); scanf("%f", &p.price);
            printf("New Quantity: "); scanf("%d", &p.quantity);

            // Di chuyển con trỏ file ngược lại 1 struct để ghi đè
            fseek(file, -(long)sizeof(struct Product), SEEK_CUR);
            fwrite(&p, sizeof(struct Product), 1, file);
            printf("Product updated successfully.\n");
            break;
        }
    }

    if (!found) printf("Product ID %d not found.\n", targetID);
    fclose(file);
}