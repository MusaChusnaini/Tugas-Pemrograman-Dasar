#include <stdio.h>

enum Menu{
	Bakso=5000,
	Mie=3000,
	Rawon=7000,
	Pecel=7000
};
enum Level{
	levelPertama=10, // 10% harga
	levelKedua=15 // 15% harga
};

int Pesan(){
	printf("===============================\n");
	printf("|Nomer|    Menu        | Harga|\n");
	printf("------------------------------\n");
	printf("|1    |   Bakso        | 5.000|\n");
	printf("------------------------------\n");
	printf("|2    |   Mie          | 3.000|\n");
	printf("------------------------------\n");
	printf("|3    |   Rawon        | 7.000|\n");
	printf("------------------------------\n");
	printf("|4    |   Pecel        | 7.000|\n");
	printf("===============================\n");
	printf("Silahkan pilih mau makan apa: ");
	int pilihan;
	scanf("%d", &pilihan);
	return pilihan;
}

int tentukanLevel(){
	int level;
	printf("\nMau yang level berapa ?? :");
	scanf("%d",&level);
	return level;
}

int main(){
	int totalHarga = 0;
	int pesan = Pesan();
	enum Menu menu;
	
	switch(pesan)
	{
	case 1:
		printf("Anda memesan Bakso, Harga : %d", menu=Bakso);
		totalHarga += menu=Bakso;
		break;
	case 2:
		printf("Anda memesan Bakso, Harga : %d", menu=Mie);
		totalHarga += menu=Mie;
		break;
	case 3:
		printf("Anda memesan Bakso, Harga : %d", menu=Rawon);
		totalHarga += menu=Rawon;
		break;
	case 4:
		printf("Anda memesan Bakso, Harga : %d", menu=Pecel);
		totalHarga += menu=Pecel;
		break;
	default:
		break;
	}
	
	int level = tentukanLevel();
	float hargaTambah = (level/100.00) * menu;
	float totalHarusDibayar = hargaTambah + totalHarga;
	
	printf("Harga tambahan : %.1f\n", hargaTambah);
	printf("Total Harga yang harus dibayar : %.1f", totalHarusDibayar);
	return 0;
	
	
}