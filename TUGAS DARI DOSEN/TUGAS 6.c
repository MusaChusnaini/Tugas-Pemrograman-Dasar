#include <stdio.h>

int main(){
	int x[3][4]={
	{0,1,2,3},
	{4,5,6,7},
	{8,9,10,11}
	};
	
	int i,j;
	
	int ganjil[6];
	int genap[6];
	
	int indexGanjil=0;
	int indexGenap=0;
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(x[i][j] % 2 ==0){
				printf("genap %d\n",x[i][j]);
				genap[indexGenap] = x[i][j];
				indexGenap++;
			}else{
				printf("ganjil %d\n",x[i][j]);
				ganjil[indexGanjil] = x[i][j];
				indexGanjil++;
			}
		}
	}
	
	int p;
	printf("\nARRAY\n");
	printf("Array Genap: ");
	for(p=0;p<indexGenap;p++){
		printf("%d ", genap[p]);
	}
	
	printf("\nArray Ganjil: ");
	for(p=0;p<indexGanjil;p++){
		printf("%d ", ganjil[p]);
	}
	
	return 0;
}