#include <stdio.h>

int main(){
	
	
	int kaloriPertama;
	int kaloriKedua;
	int kaloriKetiga;
	
	printf("---PROGRAM MENGHITUNG KALORI-----\n");
	
	printf("Program ini akan menghitung kalori harian yang dikonsumsi\n");
	// DEKLARASI VARIABLE
	
	// MASUKKAN KALORI PERTAMA
	printf("Masukkan Kalori Pertama: ");
	scanf("%d", &kaloriPertama);
	// MASUKKAN KALORI KEDUA
	printf("Masukkan Kalori Kedua: ");
	scanf("%d", &kaloriKedua);
	// MASUKKAN KALORI KETIGA
	printf("Masukkan Kalori Ketiga: ");
	scanf("%d", &kaloriKetiga);
	
	int totalKalori = kaloriPertama + kaloriKedua + kaloriKetiga;
	// MENAMPILKAN JUMLAH KALORI
	printf("\n\nTotal kalori : %d", totalKalori);
	// CEK JIKA KALORI MELEBIHI BATAS HARIAN
	if(totalKalori >= 5000){
		   printf("\nTotal kalori melebihi batas harian.");	
	}
	else{
 	 	 	 printf("\nTotal kalori tidak melebihi batas harian.");
	}
	
	
	return 0;
}