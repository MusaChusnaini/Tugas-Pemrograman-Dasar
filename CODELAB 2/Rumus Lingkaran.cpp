#include <stdio.h>

int main(){
	float jariJari;
	float phi =  3.14159;
	float luasLingkaran = 0;
	float kelilingLingkaran = 0;
	// MASUKKAN JARI JARI
	printf("Masukkan Jari Jari: ");
	scanf("%f",&jariJari);
	// MENGHITUNG LUAS
	luasLingkaran = phi * (jariJari*jariJari);
	// MENGHITUNG KELILING
	kelilingLingkaran = 2 * phi * jariJari;
	
	printf("Luas = %.2f\n", luasLingkaran);
	printf("Keliling = %.2f", kelilingLingkaran);
	return 0;
}