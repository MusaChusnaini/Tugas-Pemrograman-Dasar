#include <stdio.h>
#include <string.h>

double penentuanPajak(int p, int q){
	
	
	
	double pjk;
	switch(q)
	{
	case 1:
		if(p <= 2000000){
		pjk = 0.1;
	}else{
		if(p <=  3000000){
		pjk = 0.15;
		}else
		{
			pjk = 0.2;
		}
	}
		break;
	case 2:
		if(p <= 2500000){
		pjk = 0.15;
	}else{
		if(p <=  3500000){
		pjk = 0.2;
		}else
		{
			pjk = 0.25;
		}
	}
		break;
	default:
		break;
	}
	return pjk;
}
int main(){
	
	char kategori[50];
	int penghasilan, gajiBersih;
	double pajak;
	
	printf("Masukkan kategori anda: ");
	gets(kategori);
	
	printf("Masukkan penghasilan anda: ");
	scanf(" %d", &penghasilan);
	
	if(strcmp(kategori, "Pekerja") == 0){
		pajak = penentuanPajak(penghasilan,1);
	}else if(strcmp(kategori, "Pebisnis") == 0){
		pajak = penentuanPajak(penghasilan,2);
		
	}else{
		return 0;
	}
	gajiBersih = penghasilan - (penghasilan * pajak);
	printf("Pajak: %lf", pajak);
	printf("Gaji Bersih Anda: %d", gajiBersih);
	
	return 0;
}