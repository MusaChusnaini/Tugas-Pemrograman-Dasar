#include <stdio.h>

enum jenisFilm{
	KoeNoKatachi=40000,
	KimiNoNaWa=45000,
	TenkiNoKo=60000,
	KimetsuNoYaiba=65000
};
enum jenisTiket{
	reguler=30000,
	VIP=50000,
	VVIP=100000
};
int main(){
	enum jenisFilm film;
	enum jenisTiket tiket;
	char respond;
	int hargaTotal = 0;
	
	printf("======= BIOSKOP ======\n");
	printf("Film:\n");
	printf("1. Koe no Katachi - Rp. %d\n", film=KoeNoKatachi);
	printf("2. Kimi no Na Wa - Rp. %d\n", film=KimiNoNaWa);
	printf("3. Tenki no Ko - Rp. %d\n", film=TenkiNoKo);
	printf("4. Kimetsu no Yaiba Mugen Train - Rp. %d\n", film=KimetsuNoYaiba);
	int pilihanFilm;
	printf("Pilih film (1/2/3/4): ");
	scanf("%d", &pilihanFilm);
	switch(pilihanFilm)
	{
	case 1:
		hargaTotal += film=KoeNoKatachi;
		break;
	case 2:
		hargaTotal += film=KimiNoNaWa;
		break;
	case 3:
		hargaTotal += film=TenkiNoKo;
		break;
	case 4:
		hargaTotal += film=KimetsuNoYaiba;
		break;
	default:
		hargaTotal += 0;
		printf("\nFilm tidak ditemukan");
		return 0;
		break;
	}
	
	printf("\nJenis Tiket:\n");
	printf("1. Reguler - Rp. %d\n", tiket=reguler);
	printf("2. VIP - Rp. %d\n", tiket=VIP);
	printf("3. VVIP - Rp. %d\n", tiket=VVIP);
	int pilihanTiket;
	printf("Pilih film (1/2/3/4): ");
	scanf("%d", &pilihanTiket);
	switch(pilihanTiket)
	{
	case 1:
		hargaTotal += tiket=reguler;
		break;
	case 2:
		hargaTotal += tiket=VIP;
		break;
	case 3:
		hargaTotal += tiket=VVIP;
		break;
	default:
		hargaTotal += 0;
		break;
	}
	
	printf("Apakah anda adalah member ? [Y/N]:");
	scanf(" %c",&respond);
	if(respond == 'y' || respond =='Y'){
		float potonganHarga = hargaTotal*(10/100.00);
		printf("Diskon : %.1f", potonganHarga);
		hargaTotal -= potonganHarga;
	}
	
	int nominalBayar;
	printf("\nTotal yang harus dibayar : %d", hargaTotal);
	printf("\nInput nominal untuk membayar: ");
	scanf(" %d", &nominalBayar);
	int kembalian = (nominalBayar - hargaTotal);
	
	if(kembalian == 0){
		printf("\nUang Pas");
	}
	else if(kembalian > 0)
	{
		printf("\nKembalian Anda: %d", kembalian);
	}else{
		printf("\nUang anda kurang!!");
	}
	int *ptr;
	ptr = &hargaTotal;
	
	
	printf("\nAlamat memori variabel total : %p", &hargaTotal);
	printf("\nTerima Kasih!");2
	return 0;
}