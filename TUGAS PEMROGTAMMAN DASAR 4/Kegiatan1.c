#include <stdio.h>

int main(){
	
	int transaksi;
	int totalTransaksi = 0;
	int respon;
	do{
		printf("Masukkan Transaksi Selanjutnya (gunakan 0 untuk menyelesaikan)\n");
	
		do{
			scanf(" %d", &transaksi);
		if(transaksi != 0){
			totalTransaksi += transaksi;
		}
		}while(transaksi != 0);
	
		printf("Total Transaksi : %d\n", totalTransaksi);
		printf("Apakah anda ingin mencatat transaksi lagi? : (1=Ya,0=Tidak)\n");
		scanf(" %d", &respon);
		if(respon != 1 && respon != 0){
			return 0;
		}
		totalTransaksi = 0;
		transaksi = 0;
	
	}while(respon != 0);
	return 0;
}