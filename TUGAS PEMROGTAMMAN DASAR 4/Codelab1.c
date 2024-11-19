#include <stdio.h>

int main(){
	
	float angka;
	float jumlah = 0;
	
	float rataRata = 0;
	int putaran = 0;
	while(angka >= 0)
	{
		putaran++;
		printf("Masukkan Bilangan Bulat (Masukkan Bilangan Negatif Untuk Berhenti) : ");
	   	scanf();
	if(angka >= 0)
	{
		jumlah += angka;
		rataRata = jumlah / putaran;
	}
	
	}
	printf("Jumlah : %.1f\n", jumlah);
	printf("Rata-rata : %.2f", rataRata);
	
	return 0;
}