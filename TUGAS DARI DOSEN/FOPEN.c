#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE * fptr;
	char nama[50];
	char NIM[50];
	
	printf("Masukkan Nama: ");
	gets(nama);
	printf("Masukkan NIM: ");
	gets(NIM);
	
	fptr= fopen("C:\\Users\\Musa Chusnaini\\Desktop\\My FileKu.txt","w");
	
	// char Tulisan[100]= "Nama:Musa \nNIM: 411";
	
	if(fptr == NULL){
  		printf("Error, Program akan otomatis ditutup");
  		exit(0);
	}else{
		// fputs(Tulisan,fptr);
		fprintf(fptr,"Nama:%s\nNIM:%s",nama,NIM);
		printf("File berhasil dibuat");
	}
	
	return 0;
}