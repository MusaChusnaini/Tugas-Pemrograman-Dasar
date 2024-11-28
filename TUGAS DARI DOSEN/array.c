#include <stdio.h>

int hitung(int angka){
	
	if(angka % 2 == 0){
		return 1;
	}else{
		return 0;
	}
	
}
int main(){
	int array[10]={1,2,3,4,5,6,7,8,9,10};
	int length = sizeof(array) / sizeof(array[0]);
	
	// ARRAY ARRAY DIBAWAH UNTUK MENYIMPAN NILAI GANJIL DAN GENAP
	int arrayGenap[length];
	int arrayGanjil[length];
	
	int i = 0;
	// INDEX INI BERGUNA UNTUK TRACK / MELACAK NILAI DALAM ARRAY
		int indexGenap = 0;
		int indexGanjil = 0;
	for(i = 0;i < length;i++){
		if(hitung(array[i])){
			arrayGenap[indexGenap] = array[i]; // ARRAYGENAP DIISI OLEH INDEXGENAP UNTUK MELACAK DIMULAI 0
			indexGenap++; // INDEX BERTAMBAH SETIAP PUTARAN GENAP
			printf("Genap %d\n", array[i]);
		}else{
			arrayGanjil[indexGanjil] = array[i]; // ARRAYGANJIL DIISI OLEH INDEXGANJIL UNTUK MELACAK DIMULAI 0
			indexGanjil++; // INDEX BERTAMBAH SETIAP PUTARAN GENAP
			printf("Ganjil %d\n", array[i]);
		}
		
	}
	
	// PERPUTARAN DILAKUKAN OLEH LOOP SENDIRI2 
	printf("---------ARRAY----------\n");
	int j;
	printf("Angka Genap: ");
	for(j = 0;j < indexGenap;j++){
		
		printf("%d ", arrayGenap[j]);
	}
	printf("Angka Ganjil: ");
	for(j = 0;j < indexGanjil;j++){
		
		printf("%d ", arrayGanjil[j]);
	}
	
	
	
	return 0;
}