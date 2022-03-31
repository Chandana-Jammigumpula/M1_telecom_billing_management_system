//LEARNPROGRAMO-PRORAMMING MADE SIMPLE
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include "modify.h"

void addrecords();
void listrecords();
void modifyrecords();
void deleterecords();
void searchrecords();
void payment();
char get;
int main()
{	int password;
	int phonenumber;
	char choice;



	system("cls");

	printf("\n\n\n\n\n\n\n\n\n**************************************************************");
	printf("\n\t\t------WELCOME TO THE TELECOM BILLING MANAGEMENT SYSTEM---");
	printf("\n\t\t****************************************************************");
	Sleep(2000);
	getch();
    system("cls");
	while (1)
	{
		system("cls");
		printf("\n Enter\n A : for adding new records.\n L : for list of records");
		printf("\n M : for modifying records.\n P : for payment");
		printf("\n S : for searching records.");
		printf("\n D : for deleting records.\n E : for exit\n");
		choice=getche();
		choice=toupper(choice);
		switch(choice)
		{

			case 'M':
				modifyrecords();break;

			default:
				system("cls");
				printf("Incorrect Input");
				printf("\nAny key to continue");
				getch();
		}
	}
}




