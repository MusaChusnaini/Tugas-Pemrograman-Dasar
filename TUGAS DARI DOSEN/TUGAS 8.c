#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE * fptr;
	char namaBarang[50];
	int harga = 0;
	int jumlah = 0;
	fptr= fopen("Cek.txt","w");
	// NAMA HARGA JUMLAH
	
	printf("Masukkan Nama Barang : ");
	gets(namaBarang);
	printf("Masukkan Harga Barang : ");
	scanf("%d",&harga);
	printf("Masukkan Jumlah Barang : ");
	scanf("%d",&jumlah);
	
	if(fptr==NULL){
		printf("Null error");
		exit(0);
	}else{
		fprintf(fptr,"Nama : %s\nHarga : %d\nJumlah : %d\nHarga Total : %d",namaBarang,harga,jumlah,jumlah*harga);
		printf("File berhasil dibuat");
	}
	fclose(fptr);
	return 0;
}