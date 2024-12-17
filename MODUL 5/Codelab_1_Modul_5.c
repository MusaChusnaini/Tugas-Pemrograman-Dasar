#include <stdio.h>

int main(){
	char names[5][20]={
		"Alice",
		"Bob",
		"Charlie",
		"David",
		"Eva"
	};
	int scores[5] = {
		85,90,78,92,88
	};
	
	int i;
	printf("Daftar Sebelum Diubah\n");
	for(i=0;i<5;i++){
		printf("%s : %d\n", names[i], scores[i]);
	}
	
	scores[3] = 95;
	
	printf("\nDaftar Setelah Diubah\n");
	for(i=0;i<5;i++){
		printf("%s : %d\n", names[i], scores[i]);
	}
	return 0;
}