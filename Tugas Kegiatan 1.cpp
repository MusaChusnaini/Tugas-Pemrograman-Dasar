#include <stdio.h>

int main(){
	
	// PENGENALAN PROGRAM (PRINT)
	printf("---Program Penghitung Nilai Akhir Mahasiswa---");
	
	char namaMahasiswa[50];
	char nimMahasiswa[50];
	int nilaiTugas;
	int nilaiUTS;
	int nilaiUAS;
	// NAMA MAHASISWA
	printf("\nMasukkan Nama Mahasiswa: ");
	gets(namaMahasiswa);
	
	// NIM MAHASISWA
	printf("Masukkan NIM Mahasiswa: ");
	gets(nimMahasiswa);
	
	// NILAI TUGAS (0-100)
	printf("Masukkan Nilai Tugas Mahasiswa: ");
	scanf("%d", &nilaiTugas);
	
	// NILAI UTS (0-100)
	printf("Masukkan Nilai UTS Mahasiswa: ");
	scanf("%d", &nilaiUTS);
	
	// NILAI UAS(0-100)
	printf("Masukkan Nilai UAS Mahasiswa: ");
	scanf("%d", &nilaiUAS);
	
	// MENGHITUNG NILAIAKHIR BERDASARKAN PRESENTASE
	int nilaiAkhir = (nilaiTugas + nilaiUTS + nilaiUAS) / 3;
	printf("\n--------------------");
	printf("\nNama Mahasiswa : %s", namaMahasiswa);
	printf("\nNIM Mahasiswa : %s", nimMahasiswa);
	printf("\nNilai Tugas Mahasiswa : %d", nilaiTugas);
	printf("\nNilai UTS Mahasiswa : %d", nilaiUTS);
	printf("\nNilai UAS Mahasiswa : %d", nilaiUAS);
	printf("\nNilai Akhir Mahasiswa : %d", nilaiAkhir);
	printf("\n--------------------");
	// MENGHITUNG NILAI AKHIR DAN MENAMPILKAN INFO MAHASISWA
	
	
	return 0;
}
