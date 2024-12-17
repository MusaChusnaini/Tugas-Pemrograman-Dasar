#include <stdio.h>
#include <string.h>

int main() {
    FILE *fptr;

    int pilihan;
    printf("Silahkan pilih aksi dibawah : \n");
    printf("1. Tulis data mahasiswa\n2. Baca data mahasiswa\n");
    scanf("%d", &pilihan);
    getchar(); // Membersihkan newline setelah scanf

    char tulisan[100];
    
    char informasi[3][50];

    if (pilihan == 1) {
        fptr = fopen("Berkas Mahasiswa.txt", "w");
         printf("Masukkan Nama: ");
         fgets(informasi[0],50,stdin);
         printf("Masukkan NIM: ");
         fgets(informasi[1],50,stdin);
         printf("Masukkan Jurusan: ");
         fgets(informasi[2],50,stdin);
        if (fptr == NULL) {
            printf("Gagal membuat file\n");
        } else {
   	    	fprintf(fptr, "Nama: %sNIM: %sJurusan: %s", informasi[0], informasi[1], informasi[2]);
            printf("File berhasil dibuat\n");
        }
        fclose(fptr);
    } else if (pilihan == 2) {
        fptr = fopen("Berkas Mahasiswa.txt", "r");
        if (fptr != NULL) {
            while (fgets(tulisan, sizeof(tulisan), fptr) != NULL) {
                printf("%s", tulisan);
            }
        } else {
            printf("Gagal membuka file\n");
        }
        fclose(fptr);
    } else {
        printf("Pilihan tidak valid\n");
    }

    return 0;
}
