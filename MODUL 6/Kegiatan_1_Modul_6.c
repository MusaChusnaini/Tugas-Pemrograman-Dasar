#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char id[10];
    char nama[50];
    char kategori[50];
    float harga;
    int stok;
}Product;

Product dataProduct[100];

void TambahProduk();
void TampilkanProduk();
void UpdateInformasiProduk();
void HapusProduk();

int main(){
    // int arraySize;
    int pilihan;
    // char info[arraySize][100];
    printf("Menu:\n");
    printf("1. Tambah produk baru:\n");
    printf("2. Tampilkan daftar produk:\n");
    printf("3. Update informasi produk:\n");
    printf("4. Hapus produk:\n");
    printf("5. Keluar:\n");
    
    printf("Pilih: ");
    scanf("%d",&pilihan);
    getchar();

    switch (pilihan)
    {
    case 1:
        // Menambah produk baru
        TambahProduk();
        break;
    case 2:
        // Tampilkan produk
        TampilkanProduk();
        break;
    case 3:
        // Update info
        UpdateInformasiProduk();
        break;
    case 4:
        // Hapus produk
        break;
    case 5:
        // keluar
        break;
    
    default:
        break;
    }
    return 0;
 
}

void TambahProduk(){
    FILE *fptr;
    fptr = fopen("produk.txt","a");
    char informasi[3][50];
    printf("Masukkan ID : \n");
    fgets(informasi[0],50,stdin);
    informasi[0][strcspn(informasi[0], "\n")] = 0;
    printf("Masukkan Nama Produk :\n");
    fgets(informasi[1],50,stdin);
    printf("Masukkan Kategori Produk : \n");
    informasi[1][strcspn(informasi[1], "\n")] = 0;
    fgets(informasi[2],50,stdin);
    informasi[2][strcspn(informasi[2], "\n")] = 0;
    printf("Masukkan Harga Produk : \n");
    scanf("%f",&dataProduct[0].harga);
    strcpy(dataProduct[0].kategori,informasi[1]);
    strcpy(dataProduct[0].nama,informasi[0]);
    printf("Masukkan Stok Produk : \n");
    scanf("%d",&dataProduct[0].stok);

    fprintf(fptr,"%s,%s,%.2f,%d\n",dataProduct[0].nama,dataProduct[0].kategori,dataProduct[0].harga,dataProduct[0].stok);
    printf("File sudah dibuat");
    fclose(fptr);
}

void TampilkanProduk() {
    FILE *fptr;
    fptr = fopen("produk_toko.txt", "r"); // Pastikan nama file sesuai
    if (fptr != NULL) {
        char tulisan[100];
        printf("Daftar Produk:\n");
        while (fgets(tulisan, sizeof(tulisan), fptr) != NULL) {
            char id[10];
            char nama[50], kategori[50];
            float harga;
            int stok;

            // Pisahkan data berdasarkan format CSV
            // Menggunakan sscanf dengan format yang lebih ketat
            sscanf(tulisan, "%[^,],%[^,],%[^,],%f,%d", id, nama, kategori, &harga, &stok);

            // Tampilkan data dalam format teks
            printf("ID: %s\n", id);
            printf("Nama: %s\n", nama);
            printf("Kategori: %s\n", kategori);
            printf("Harga: %.2f\n", harga); // Menggunakan %.2f untuk menampilkan dua angka desimal
            printf("Stok: %d\n\n", stok);
        }
        fclose(fptr);
    } else {
        printf("Error: Tidak dapat membuka file.\n");
    }
}

void UpdateInformasiProduk() {
    char id[10];
    printf("ID");
    fgets(id,10,stdin);
    FILE *fptr = fopen("produk.txt","r");
    Product p;
    while (fread(&p,sizeof(Product),1,fptr))
    {
        if(strcmp(id,p.id)==0){
            printf("Produk ditemukan");
            fclose(fptr);
        }
    }
    
}