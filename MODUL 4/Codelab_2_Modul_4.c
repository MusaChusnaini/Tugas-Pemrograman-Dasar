#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
	char nama[50];
	bool repeated;
	
	printf("Masukkan sebuah string : ");
	gets(nama);
	
	int i = 0;
	int j = 0;
	int length = strlen(nama);
	
	// LOOP PERTAMA UNTUK MENCETAK CHAR DALAM ARRAY SATU PERSATU
	for(i = 0; i <= length; i++){
		repeated = false;
		
		// LOOP KEDUA MENGIKUTI LOOP PERTAMA UNTUK MENGECEK APAKAH ADA CHAR YANG TERCETAK SEBELUMNYA
		for(j = 0; j < i; j++){
			// MENGECEK MENGGUNAKAN IF STATEMENT, BILA TERDETEKSI DUPLIKAT MAKA BREAK AGAR BERHENTI
			if(nama[i] == nama[j]){
				repeated = true;
				break;
			}
		
		}
		// DI CONDITION INI HANYA PUTARAN SAAT REPEATED FALSE SAJA YANG MENYETAK CHAR
			if(!repeated){
				
				printf("%c", nama[i]);
			}
	}
	
	return 0;
}