#include <stdio.h>

int main(){
	printf("Masukka angka : ");
	int angka,i;
	scanf(" %d",&angka);
	
	
	for(i=0;i<=angka;i++){
		if(i % 2 == 0){
			printf("Angka Genap : %d",i);
		}else{
			printf("Angka Ganjil : %d",i);	
		}
	}
	return 0;
}