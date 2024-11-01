#include <stdio.h>

float luasPersegi(int s){
	float luas = s * s;
	return luas;
} 
float luasPersegiPanjang(int p,int l){
	float luas= p * l;
	return luas;
}

int main(){
	
	int i;
	for(i=0;i<5;i++){
		float luasPP = luasPersegiPanjang(i,i);
		float luasP =  luasPersegi(i);
		printf("Luas Persegi Panjang = %.2f\n", luasPP);
		printf("Luas Persegi = %.2f\n", luasP);
		luasPersegi(i);
	}
	return 0;
}