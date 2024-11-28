#include<stdio.h>
int main(){
  int jumlahData;
  printf("Masukkan Jumlah Data : ");
  scanf("%d", &jumlahData);

  float data[jumlahData][3];

  int i,j;
  float nilai[3] ={0,0,0};
  
  for(i=0;i<jumlahData;i++){
  	printf("Masukkan nilai Mahasiswa ke-%d: ", i);
    scanf("%f %f %f",&nilai[0],&nilai[1],&nilai[2]);
  	  for(j=0;j<3;j++){
			data[i][j]= nilai[j];
		}
  }
  
  printf("Daftar nilai ujian : \n");
  printf("Mahasiswa\tMatematika\tFisika\t\tKimia\n");
  
  float jumlahNilai[4] = {0,0,0,0};
  float rataRata[3];
  for(i=0;i<jumlahData;i++){
  	printf("Mhs%d\t", i+1);
	  for(j=0;j<3;j++){
  	  	  printf("\t%.2f\t",data[i][j]);
  	  jumlahNilai[j] += data[i][j];
  	  rataRata[j] = jumlahNilai[j] / jumlahData;
  	  
	  }
	  printf("\n");
	  
  }
  jumlahNilai[4] = (rataRata[0]+rataRata[1]+rataRata[2])/3;
  printf("\nMatematika : %.2f\n",rataRata[0]);
  printf("Fisika : %.2f\n",rataRata[1]);
  printf("Kimia : %.2f\n",rataRata[2]);
  printf("Rata-rata keseluruhan : %.2f\n",jumlahNilai[4]);
  return 0;
}