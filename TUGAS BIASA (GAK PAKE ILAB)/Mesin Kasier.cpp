#include <stdio.h>

int main(){
	// DEKLARASI VARIABEL
	char pesanMakan, pesanMinum;
	int totalHarga = 0;
	int hargaMakan = 0, hargaMinum = 0;
	
	// SESI PESAN MAKANAN
	printf("Mau pesan makan? [y/n]:");
	scanf(" %c",&pesanMakan);
	if(pesanMakan == 'y' || pesanMakan == 'Y'){
		int qty = 0;
		int menu;
		printf("\n==============\n");
		printf("|Kode|Nama       |Harga\n");
		printf("--------------\n");
		printf("|1   |Pecel      |Rp. 7000\n");
		printf("--------------\n");
		printf("|2   |Nasi Goreng|Rp. 10000\n");
		printf("==============");
		
		printf("\nPesan Apa ?");
		scanf("%d",&menu);
		switch(menu)
		{
		case 1:
			hargaMakan = 7000;
			break;
		case 2:
			hargaMakan = 10000;
			break;
		default:
			printf("Pilihan tidak valid.\n");
            return 0;
		}
		printf("Berapa banyak: ");
		scanf("%d",&qty);
		totalHarga += hargaMakan * qty;
	}
	
	// SESI PESAN MINUMAN
	printf("Mau pesan minum? [y/n]:");
	scanf(" %c", &pesanMinum);
	if(pesanMinum == 'y' || pesanMinum == 'Y'){
		printf("\n===================\n");
		printf("|Kode|Nama  |Harga\n");
		printf("-------------------\n");
		printf("| 1  |EsTeh |Rp. 5000\n");
		printf("-------------------\n");
		printf("| 2  |Kopi  |Rp. 2000\n");
		printf("===================");
		int qty = 0;
		int minum;
		scanf("%d",&minum);
		switch(minum)
		{
			case 1:
			hargaMinum = 5000;
			break;
			case 2:
			hargaMinum = 2000;
			break;
			default:
                printf("Pilihan tidak valid.\n");
                return 0;
		}
		printf("Berapa banyak: ");
		scanf("%d",&qty);
		totalHarga += hargaMinum * qty;
	}
	
    printf("Total harga yang harus dibayar: %d\n", totalHarga);
	return 0;
}