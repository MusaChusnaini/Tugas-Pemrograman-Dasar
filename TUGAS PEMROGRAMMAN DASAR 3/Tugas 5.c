#include <stdio.h>

int main(){
	float pendapatan, pengeluaran, penghasilan;
	
	printf("============PENGHITUNG pendapatan & PENGELUARAN============");
	printf("\nMasukkan pendapatan: ");
	scanf("%f", &pendapatan);
	printf("\nMasukkan Pengeluaran: ");
	scanf("%f", &pengeluaran);
	
	if(pendapatan>=pengeluaran){
		penghasilan = pendapatan - pengeluaran;
		printf("Keuntungan: %.0f", penghasilan);
	}else{
		penghasilan = pengeluaran - pendapatan;
		printf("Kerugian: %.0f", penghasilan);
	}
	return 0;
}