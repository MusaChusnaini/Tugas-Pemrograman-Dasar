#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tulisDataMahasiswa() { //fungsi file untuk mengisi nama, nim, dan program studi mahasiswa
    char nama[50], programStudi[50];
    char nim[50]; //deklarasi variabel
	
    FILE *fptr; //awalan pembuatan file
	fptr = fopen("data_mahasiswa.txt", "w"); //penamaan file dan karena kita mau nulis maka pakai "w" yang artinya write atau tulis
	
    if (fptr == NULL) { // bila ada error
        printf("Gagal membuka file!\n");
        return;
    }
	
	//isi program
    printf("Masukkan nama: ");
    scanf("%s", nama);
    printf("Masukkan NIM: ");
    scanf("%s", nim);
    printf("Masukkan Program Studi: ");
    scanf("%s", programStudi);
	
	//isi di file nanti
    fprintf(fptr, "Nama: %s\n", nama);
    fprintf(fptr, "NIM: %s\n", nim);
    fprintf(fptr, "Program Studi: %s\n", programStudi);
	
	//untuk menutup program dan memberitahu bahwa file berhasil ditulis 
    fclose(fptr);
    printf("Data mahasiswa berhasil ditulis ke file.\n");
}

void bacaDataMahasiswa() { //untuk membaca atau menampilkan data mahasiswa di program
    char addData[255]; //deklarasi variabel untuk menyimpan data dari file data_mahasiswa

    FILE *fptr; //awalan pemmbuatan file
	fptr = fopen("data_mahasiswa.txt", "r"); //penulisan nama dan karena kita hanya ingin membaca filenya saja maka menggunakan "r" yang artinya read atau membaca
	
    if (fptr == NULL) { //jika program error
        printf("Gagal membuka file! Data belum ada.\n");
        return;
    }
	
	//untuk menampilkan data mahsasiswa di program
    printf("\nData mahasiswa:\n"); 
    while (fgets(addData, sizeof(addData), fptr)) { //harus menggunakan sizeof karena kita ingin mengambil data dari addData
        printf("%s", addData); //untuk menampilkan data dari file data_mahasiswa
    }

    fclose(fptr);//menutup program
}

int main() {
    int pilihan;
	
	//alasan memakai do while agar program terus looping sampai user menginput angka selain 1 atau 2 sehingga hasilnya akan false dan program berhenti
    do { 
        printf("\nPilih aksi:\n");
        printf("1. Tulis data mahasiswa\n");
        printf("2. Baca data mahasiswa\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilihan);

		//untuk tampilan pilihan user
        switch (pilihan) {
            case 1:
                tulisDataMahasiswa();
                break;
            case 2:
                bacaDataMahasiswa();
                break;
            default:
                printf("Pilihan tidak valid. Keluar program.\n");
                break;
        }
    } while (pilihan == 1 || pilihan == 2); //untuk membatasi input an user yang dimana user hanya bisa menginputkan angka 1 atau 2

    return 0;
}