#include <stdio.h>
#include <string.h>

int main() {
    int index;
    printf("Masukkan jumlah buah (Max 10): ");
    scanf("%d", &index);
    if(index > 10)return 0;
    

    int i , j;
    char nama[index][20]; 
    char temp[100];

 
    for (i = 0; i < index; i++) {
        printf("Masukkan nama  ke-%d: ", i+1);
        scanf("%s", nama[i]);
    }

    
    printf("\nSEBELUM DIURUTKAN:\n");
    for (i = 0; i < index; i++) {
 	
        printf("%s\n", nama[i]);
    }

  
    for (i = 0; i < index ; i++) {
        for (j = i + 1; j < index; j++) {
            if (strcmp(nama[i], nama[j]) > 0) {
                strcpy(temp, nama[i]);
                strcpy(nama[i], nama[j]);
                strcpy(nama[j], temp);
            }
        }
    }


    printf("\nSETELAH DIURUTKAN:\n");
    for (i = 0; i < index; i++) {
        printf("%s\n", nama[i]);
    }

    return 0;
}