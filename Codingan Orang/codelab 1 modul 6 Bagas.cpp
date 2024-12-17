#include <stdio.h>

//faktorial
int faktorial(int n) {
    if (n <= 1)
        return 1; 
    return n * faktorial(n - 1);
}

//fibonacci
int fibonacci(int n) {
    if (n == 0)
        return 0; 
	 else if(n == 1){
        return 1; 
	}
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int angka, i; //deklarasi
	
	//user input angka yang ingin difaktorial
    printf("Masukkan angka untuk menghitung faktorial: ");
    scanf("%d", &angka);
	
	//jika angka kurang 0 maka hasilnya akan true dan program berhenti
    if (angka < 0) {
        printf("Faktorial hanya bisa dihitung untuk angka >= 0.\n");
    } else {
    	//jika angka ternyata lebih dari 0 maka hsailnya akan false dan program akan menghitung faktorialnya
        printf("Faktorial dari %d adalah: %d\n", angka, faktorial(angka));
    }
	
	//setelah user menginputkan angka lebih dari 0, program akan lanjut untuk meminta user menginputkan jumlah suku fibonacci
    printf("Masukkan jumlah suku Fibonacci yang ingin ditampilkan: ");
    scanf("%d", &angka);

	//jika jumlah suku kurang dari atau sama dengan 0 maka hasilnya akan true dan program berhenti
    if (angka <= 0) {
        printf("Jumlah suku Fibonacci harus > 0.\n"); //dan akan muncul ini
    } else {
    	//jika jumlah suku lebih dari 0 maka hasilnya akan false dan program akan mengeksekusi perintah
        printf("Deret Fibonacci hingga suku ke-%d adalah: ", angka); //nanti output darisini
        for (i = 0; i < angka; i++) { //looping agar setiap suku yang ditampilakn akan ditambah sesuai fungsi return fibonacci(n - 1) + fibonacci(n - 2)
        	//seperti 0 1 1 2 3 5 angka ini didapat dari (0+1) (1+1) (2+1) (3+2)
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }

    return 0;
}
