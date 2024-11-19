#include <stdio.h>

int main(){
	int x[3][4]={
	{0,1,2,3},
	{4,5,6,7},
	{8,9,10,11}
	};
	
	int i,j;
	
	int x_ganjil,y_ganjil;
	int x_genap,y_genap;
	
	int genap[2][3];
	int ganjil[2][3];
	
	int indexGanjil=0;
	int indexGenap=0;
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(x[i][j] % 2 !=0){
				for(x_ganjil=0;x_ganjil<2;x_ganjil++){
					for(y_ganjil=0;y_ganjil<2;y_ganjil++){
						ganjil[x_ganjil][y_ganjil]=x[i][j];
					}
				}
				indexGanjil++;
			}else{
				for(x_genap=0;x_genap<2;x_genap++){
					for(y_genap=0;y_genap<2;y_genap++){
						genap[y_genap][y_ganjil]=x[i][j];
					}
				}
				indexGenap++;
			}
		}
	}
	
	int p;
	printf("\nARRAY\n");
	printf("Array Genap: ");
	for(p=0;p<indexGenap;p++){
		
	}
	
	printf("\nArray Ganjil: ");
	for(p=0;p<indexGanjil;p++){
		
	}
	
	return 0;
}