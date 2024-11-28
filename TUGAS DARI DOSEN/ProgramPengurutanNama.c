#include <stdio.h>
#include <string.h>

int main() {
    int index;
    printf("Masukkan jumlah data: ");
    scanf("%d", &index);

    int i , j;
    char nama[index][20]; 
    char temp[100];

 
    for (i = 0; i < index; i++) {
        printf("Masukkan nama ke-%d: ", i);
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