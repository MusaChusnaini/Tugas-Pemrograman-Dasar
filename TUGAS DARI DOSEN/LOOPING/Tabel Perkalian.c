#include <stdio.h>

int main() {
    int num, angkaPerkalian;
    
    printf("Masukkan angka: ");
    scanf("%d", &num);
    printf("perkalian hingga berapa? :");
    scanf(" %d", &angkaPerkalian);
    
    int numTemp = 0;
    while(numTemp < angkaPerkalian)
	{
		numTemp++;
		printf("%d", num);
		printf(" * %d = ", numTemp);
		printf("%d\n", num * numTemp);
		
	}
    
    return 0;
}
