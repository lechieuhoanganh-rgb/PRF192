#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "products.bin"

typedef struct {
    int product_id;
    char product_name[50];
    float price;
    int quantity;
} Product;

/*  UTILITY FUNCTIONS */

void clearBuffer() {
    while (getchar() != '\n');
}

int isIDExist(int id) {
    FILE *file = fopen(FILENAME, "rb");
    if (file == NULL) return 0;

    Product p;
    while (fread(&p, sizeof(Product), 1, file)) {
        if (p.product_id == id) {
            fclose(file);
            return 1;
        }
    }
    fclose(file);
    return 0;
}

/*  WRITE PRODUCTS */

void writeProducts() {
    FILE *file = fopen(FILENAME, "wb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    int n;
    printf("Enter the number of products to write: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        Product p;

        printf("\nEnter details for product %d:\n", i + 1);

        do {
            printf("Product ID: ");
            scanf("%d", &p.product_id);
            if (isIDExist(p.product_id))
                printf("ID already exists! Enter again.\n");
        } while (isIDExist(p.product_id));

        clearBuffer();
        printf("Product Name: ");
        fgets(p.product_name, sizeof(p.product_name), stdin);
        p.product_name[strcspn(p.product_name, "\n")] = 0;

        printf("Price: ");
        scanf("%f", &p.price);

        printf("Quantity: ");
        scanf("%d", &p.quantity);

        fwrite(&p, sizeof(Product), 1, file);
    }

    fclose(file);
    printf("\nProducts have been written successfully.\n");
}

/*  APPEND PRODUCTS= */

void appendProducts() {
    FILE *file = fopen(FILENAME, "ab");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    int n;
    printf("Enter the number of products to append: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        Product p;

        printf("\nEnter details for product %d:\n", i + 1);

        do {
            printf("Product ID: ");
            scanf("%d", &p.product_id);
            if (isIDExist(p.product_id))
                printf("ID already exists! Enter again.\n");
        } while (isIDExist(p.product_id));

        clearBuffer();
        printf("Product Name: ");
        fgets(p.product_name, sizeof(p.product_name), stdin);
        p.product_name[strcspn(p.product_name, "\n")] = 0;

        printf("Price: ");
        scanf("%f", &p.price);

        printf("Quantity: ");
        scanf("%d", &p.quantity);

        fwrite(&p, sizeof(Product), 1, file);
    }

    fclose(file);
    printf("\nProducts have been appended successfully.\n");
}

/*  READ PRODUCTS= */

void readProducts() {
    FILE *file = fopen(FILENAME, "rb");
    if (file == NULL) {
        printf("No product file found!\n");
        return;
    }

    Product p;

    printf("\n-----------------------------------------------------\n");
    printf("%-15s %-20s %-10s %-10s\n", "Product ID", "Product Name", "Price", "Quantity");
    printf("-----------------------------------------------------\n");

    while (fread(&p, sizeof(Product), 1, file)) {
        printf("%-15d %-20s %-10.2f %-10d\n",
               p.product_id, p.product_name, p.price, p.quantity);
    }

    printf("-----------------------------------------------------\n");

    fclose(file);
}

/*  MODIFY PRODUCT  */

void modifyProduct() {
    FILE *file = fopen(FILENAME, "rb+");
    if (file == NULL) {
        printf("File not found!\n");
        return;
    }

    int id;
    printf("Enter the Product ID to modify: ");
    scanf("%d", &id);

    Product p;
    int found = 0;

    while (fread(&p, sizeof(Product), 1, file)) {
        if (p.product_id == id) {
            found = 1;

            printf("Product found. Enter new details:\n");

            clearBuffer();
            printf("New Product Name: ");
            fgets(p.product_name, sizeof(p.product_name), stdin);
            p.product_name[strcspn(p.product_name, "\n")] = 0;

            printf("New Price: ");
            scanf("%f", &p.price);

            printf("New Quantity: ");
            scanf("%d", &p.quantity);

            fseek(file, -((long)sizeof(Product)), SEEK_CUR);
            fwrite(&p, sizeof(Product), 1, file);

            printf("Product updated successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Product ID not found!\n");
    }

    fclose(file);
}

/* MAIN MENU */

int main() {
    int choice;

    do {
        printf("\n-- Product Management System --\n");
        printf("1. Write Products\n");
        printf("2. Append Products\n");
        printf("3. Read Products\n");
        printf("4. Modify Product\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                writeProducts();
                break;
            case 2:
                appendProducts();
                break;
            case 3:
                readProducts();
                break;
            case 4:
                modifyProduct();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 5);

    return 0;
}