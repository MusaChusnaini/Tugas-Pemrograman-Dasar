#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "produk_toko.txt"
#define MAX_PRODUCTS 100
#define MAX_LENGTH 100

typedef struct {
    char id[MAX_LENGTH];
    char name[MAX_LENGTH];
    char category[MAX_LENGTH];
    float price;
    int stock;
} Product;

void welcome_message() {
    printf("Selamat datang di Program Manajemen Toko Elektronik!\n");
    printf("Program ini digunakan untuk mengelola informasi produk elektronik di toko.\n");
    printf("Anda dapat menambahkan, menampilkan, memperbarui, dan menghapus produk.\n\n");
}

void add_product() {
    FILE *file = fopen(FILENAME, "a");
    if (file == NULL) {
        printf("Error: Tidak dapat membuka file.\n");
        return;
    }

    Product product;
    printf("Masukkan ID Produk: ");
    scanf("%s", product.id);

    // Cek apakah ID sudah ada
    Product temp;
    int found = 0;
    FILE *read_file = fopen(FILENAME, "r");
    while (fscanf(read_file, "%[^,],%[^,],%[^,],%f,%d\n", temp.id, temp.name, temp.category, &temp.price, &temp.stock) != EOF) {
        if (strcmp(product.id, temp.id) == 0) {
            printf("ID SUDAH TERDAFTAR. Silakan masukkan ID yang berbeda.\n");
            found = 1;
            break;
        }
    }
    fclose(read_file);

    if (found) {
        fclose(file);
        return;
    }

     printf("Masukkan Nama Produk: ");
    getchar(); // Menghapus newline yang tersisa di buffer
    fgets(product.name, MAX_LENGTH, stdin);
    product.name[strcspn(product.name, "\n")] = 0; // Menghapus newline di akhir

    printf("Masukkan Kategori Produk: ");
    fgets(product.category, MAX_LENGTH, stdin);
    product.category[strcspn(product.category, "\n")] = 0; // Menghapus newline di akhir

    printf("Masukkan Harga: ");
    scanf("%f", &product.price);
    printf("Masukkan Stok: ");
    scanf("%d", &product.stock);

    fprintf(file, "%s,%s,%s,%.2f,%d\n", product.id, product.name, product.category, product.price, product.stock);
    fclose(file);
    printf("Produk berhasil ditambahkan.\n");
}

void display_products() {
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        printf("Error: Tidak dapat membuka file.\n");
        return;
    }

    Product product;
    printf("\nDaftar Produk:\n");
    printf("ID Produk | Nama Produk | Kategori | Harga | Stok\n");
    printf("---------------------------------------------------\n");
    while (fscanf(file, "%[^,],%[^,],%[^,],%f,%d\n", product.id, product.name, product.category, &product.price, &product.stock) != EOF) {
        printf("%s | %s | %s | %.2f | %d\n", product.id, product.name, product.category, product.price, product.stock);
    }
    fclose(file);
}

void update_product() {
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        printf("Error: Tidak dapat membuka file.\n");
        return;
    }

    Product products[MAX_PRODUCTS];
    int count = 0;

    while (fscanf(file, "%[^,],%[^,],%[^,],%f,%d\n", products[count].id, products[count].name, products[count].category, &products[count].price, &products[count].stock) != EOF) {
        count++;
    }
    fclose(file);

    char id[MAX_LENGTH];
    printf("Masukkan ID Produk yang ingin diperbarui: ");
    scanf("%s", id);

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(products[i].id, id) == 0) {
            found = 1;
            printf("Masukkan Nama Produk Baru: ");
            scanf("%s", products[i].name);
            printf("Masukkan Kategori Produk Baru: ");
            scanf("%s", products[i].category);
            printf("Masukkan Harga Baru: ");
            scanf("%f", &products[i].price);
            printf("Masukkan Stok Baru: ");
            scanf("%d", &products[i].stock);
            break;
        }
    }

    if (!found) {
        printf("Produk dengan ID %s tidak ditemukan.\n", id);
        return;
    }

    file = fopen(FILENAME, "w");
    for (int i = 0; i < count; i++) {
        fprintf(file, "%s,%s ,%s,%.2f,%d\n", products[i].id, products[i].name, products[i].category, products[i].price, products[i].stock);
    }
    fclose(file);
    printf("Produk berhasil diperbarui.\n");
}

void delete_product() {
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        printf("Error: Tidak dapat membuka file.\n");
        return;
    }

    Product products[MAX_PRODUCTS];
    int count = 0;

    while (fscanf(file, "%[^,],%[^,],%[^,],%f,%d\n", products[count].id, products[count].name, products[count].category, &products[count].price, &products[count].stock) != EOF) {
        count++;
    }
    fclose(file);

    char id[MAX_LENGTH];
    
    printf("Masukkan ID Produk yang ingin dihapus: ");
    scanf("%s", id);

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(products[i].id, id) == 0) {
            found = 1;
            for (int j = i; j < count - 1; j++) {
                products[j] = products[j + 1];
            }
            count--;
            break;
        }
    }

    if (!found) {
        printf("Produk dengan ID %s tidak ditemukan.\n", id);
        return;
    }

    file = fopen(FILENAME, "w");
    for (int i = 0; i < count; i++) {
        fprintf(file, "%s,%s,%s,%.2f,%d\n", products[i].id, products[i].name, products[i].category, products[i].price, products[i].stock);
    }
    fclose(file);
    printf("Produk berhasil dihapus.\n");
}

int main() {
    welcome_message();
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Tambah Produk Baru\n");
        printf("2. Tampilkan Daftar Produk\n");
        printf("3. Update Informasi Produk\n");
        printf("4. Hapus Produk\n");
        printf("5. Keluar\n");
        printf("Pilih opsi (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_product();
                break;
            case 2:
                display_products();
                break;
            case 3:
                update_product();
                break;
            case 4:
                delete_product();
                break;
            case 5:
                printf("Terima kasih telah menggunakan program ini. Sampai jumpa!\n");
                break;
            default:
                printf("Opsi tidak valid. Silakan coba lagi.\n");
        }
    } while (choice != 5);

    return 0;
}