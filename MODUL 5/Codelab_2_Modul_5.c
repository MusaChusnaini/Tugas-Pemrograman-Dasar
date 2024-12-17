#include <stdio.h>

int main(){
	
	int arrayToko[2][3] = {
	{5,8,6},
	{3,7,9}
	};
	
	
	printf("Total penjualan setiap produk\n");
	
	int i;
	int jumlahProdukA =0;
	int jumlahProdukB= 0;
	int jumlahProdukC = 0;
	for(i=0;i<2;i++){
		jumlahProdukA += arrayToko[i][0] ;
		jumlahProdukB += arrayToko[i][1];
		jumlahProdukC += arrayToko[i][2];
	}
	printf("Produk A : %d\n", jumlahProdukA);
	printf("Produk B : %d\n", jumlahProdukB);
	printf("Produk C : %d", jumlahProdukC);
	return 0;
}