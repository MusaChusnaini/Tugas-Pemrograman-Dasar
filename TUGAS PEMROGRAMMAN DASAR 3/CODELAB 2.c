#include <stdio.h>

enum kelas{
	economy = 250,business = 500,firstClass = 800
};

int main(){
	enum kelas ticketClass;
	printf("WELCOME TO TLOGOMAS AIRPORT!\n");
	printf("------------------------------\n");
	printf("Please choose class of your ticket:\n");
	printf("1. Economy : %d\n", ticketClass=economy);
	printf("2. Business : %d\n", ticketClass=business);
	printf("3. First Class : %d\n", ticketClass=firstClass);
	printf("------------------------------\n");
	int pilihan = 0;
	printf("Please choice from the list (1/2/3):");
	scanf("%d", &pilihan);
	
	switch(pilihan)
	{
	case 1:
		printf("\nTicket for Economy class is: %d, Thanks for purchasing! Wish your safety abroad!", ticketClass=economy);
		break;
	case 2:
		printf("\nTicket for Business class is: %d, Thanks for purchasing! Wish your safety abroad!", ticketClass=business);
		break;
	case 3:
		printf("\nTicket for First Class is: %d\n, Thanks for purchasing! Wish your safety abroad!", ticketClass=firstClass);
		break;
	default:
		printf("\nI'm sorry, your choice doesn't exist from previous list");
		break;
	}
	return 0;
}