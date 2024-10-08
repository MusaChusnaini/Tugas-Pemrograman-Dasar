#include <stdio.h>
int main() 
{
	
	// TERDAPAT ERROR PADA FUNCTION SCANF, DIMANA DIDALAM KURUNG VARIABEL TIDAK DITAMBAHKAN
	// SIMBOL '&' SEHINGGA SINTAKS TIDAK DIKENALI
	
	int a, b;
	printf("Masukkan dua angka: ");
	scanf("%d %d", &a, &b);

	int sum = a + b;
	printf("Penjumlahan: %d\n", sum);

	int difference = a - b;
	printf("Pengurangan: %d\n", difference);

	int product = a * b;
	printf("Perkalian: %d\n", product);

	if (b != 0) {
		float division = a / b;
		printf("Pembagian: %.2f\n", division);
	}
	else
	{ 
		printf("Error: Pembagian dengan nol\n");
	}
	return 0;
}