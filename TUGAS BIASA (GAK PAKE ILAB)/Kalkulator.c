#include <stdio.h>

int main(){
	int angkaPertama,angkaKedua, hasil;
	char operators;
	
	printf("angka pertama: ");
	scanf("%d", &angkaPertama);
	printf("angka kedua: ");
	scanf("%d", &angkaKedua);
	printf("diapakan: ");
	scanf(" %c", &operators);
	
	switch(operators)
	{
	case '/':
		hasil = angkaPertama / angkaKedua;
		break;
	case '+':
		hasil = angkaPertama + angkaKedua;
		break;
	case '-':
		hasil = angkaPertama - angkaKedua;
		break;
	case '*':
		hasil = angkaPertama * angkaKedua;
		break;
	default:
		break;
	}
	
	printf("Hasil : %d", hasil);
	return 0;
	
}