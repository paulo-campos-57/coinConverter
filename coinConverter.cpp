#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//Clean screen
void cleanScreen(){
	system("CLS");
}

//Pause the system
void pause(){
	printf("\n\nPress any key to continue...\n\n");
	getch();
}

//Convert the values
float convert(float a, float b){
	float c;
	c = a * b;
	return c;
}

int main(){
	int opt = 1;
	char coin1[30], coin2[30];
	float value, price;
	while (opt != 0){
		printf("-----------------Coin Converter-----------------\n\n");
		pause();
		cleanScreen();
		printf("Type the name of the coin you have: ");
		gets(coin1);
		fflush(stdin);
		printf("\n\n\n");
		printf("Type the name of the coin you want to convert: ");
		gets(coin2);
		fflush(stdin);
		printf("\n\n\n");
		printf("Type the value you have in %s: ", coin1);
		scanf("%f",&value);
		fflush(stdin);
		printf("\nType the price of %s in %s: ", coin2, coin2);
		scanf("%f",&price);
		fflush(stdin);
		pause();
		cleanScreen();
		printf("You have %.2f in %s", convert(value, price), coin2);
		printf("\n\n\nPress 0 to end the operation, or any other key to convert again: ");
		scanf("%d",&opt);
		fflush(stdin);
		cleanScreen();
	}
	
	printf("Operation finished.");
	pause();
}
