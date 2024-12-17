#include <stdio.h>

int hasilFaktorial(int angka){
    if(angka == 0 || angka == 1){
        return 1;
    }return angka * hasilFaktorial(angka-1);
    // 10
}
int hasilFibonacci(int angka){
    if(angka==0){
return 0;
    }else if(angka==1){
return 1;
    }
    return hasilFibonacci(angka-1) + hasilFibonacci(angka-2);
}
int main(){
    int angkaFaktorial, deretFibonacci, i;
    int hasil=0;
    printf("Masukkan angka untuk menghitung faktorial : ");
    scanf("%d",&angkaFaktorial);
    hasil=hasilFaktorial(angkaFaktorial);
    printf("Hasil faktorial dari %d = %d\n",angkaFaktorial,hasil);
    printf("Masukkan angka untuk deret fibonacci = ");
    scanf("%d",&deretFibonacci);
    printf("Deret Fibonacci sepanjang %d adalah :\n",deretFibonacci);
    for (i = 0; i < deretFibonacci; i++)
    {
        printf("%d\t",hasilFibonacci(i));
    }
    

    return 0;
}