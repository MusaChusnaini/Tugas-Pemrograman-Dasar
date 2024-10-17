#include <stdio.h>

void printZodiacName(int inputTanggal,int minTanggal,int maxTanggal, char zodiacName[]){
	if(inputTanggal >= minTanggal && inputTanggal <= maxTanggal){
		printf("Zodiak kamu adalah : %s\n", zodiacName);
	}
}

void penentuZodiak(int bulan,int tanggal){
	printf("====================================\n");
	switch(bulan)
	{
	case 1:
		printZodiacName(tanggal,1,19, "Capricornus");
		printZodiacName(tanggal,20,31, "Aquarius");
		break;
	case 2:
		printZodiacName(tanggal,1,18, "Aquarius");
		printZodiacName(tanggal,19,31, "Pisces");
		break;
	case 3:
		printZodiacName(tanggal,21,31, "Aries");
		printZodiacName(tanggal,1,20, "Pisces");
		break;
	case 4:
		printZodiacName(tanggal,1,19, "Aries");
		printZodiacName(tanggal,20,31, "Taurus");
		break;
	case 5:
		printZodiacName(tanggal,1,20, "Taurus");
		printZodiacName(tanggal,21,31, "Gemini");
		break;
	case 6:
		printZodiacName(tanggal,1,20, "Gemini");
		printZodiacName(tanggal,21,31, "Cancer");
		break;
	case 7:
		printZodiacName(tanggal,1,22, "Cancer");
		printZodiacName(tanggal,23,31, "Leo");
		break;
	case 8:
		printZodiacName(tanggal,1,22, "Leo");
		printZodiacName(tanggal,23,31, "Virgo");
		break;
	case 9:
		printZodiacName(tanggal,1,22, "Virgo");
		printZodiacName(tanggal,23,31, "Libra");
		break;
	case 10:
		printZodiacName(tanggal,1,22, "Libra");
		printZodiacName(tanggal,23,31, "Scorpius");
		break;
	case 11:
		printZodiacName(tanggal,1,21, "Scorpius");
		printZodiacName(tanggal,22,31, "Sagittarius");
		break;
	case 12:
		printZodiacName(tanggal,1,21, "Sagittarius");
		printZodiacName(tanggal,22,31, "Capricornus");
		break;
	default:
		printf("Kesalahan dalam input tanggal atau bulan\n");
		break;
	}
	
	printf("====================================");
}

int main(){
	int inputTanggal,inputBulan;
	
	printf("PROGRAM MENENTUKAN ZODIAK\n");
	printf("Masukkan Tanggal : ");
	scanf("%d",&inputTanggal);
	printf("Masukkan Bulan : ");
	scanf("%d", &inputBulan);
	penentuZodiak(inputBulan,inputTanggal);
	return 0;
}