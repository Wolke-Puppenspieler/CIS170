/*Justin Newman
CIS170 Section 01
Bank Program*/

#include<stdio.h>

char dispayMenu();

int main()
	{
		char selection;
		unsigned int balance;
		
		do
			{
				printf("Welcome to HFCC Federal Credit Union");
				printf("\n\nPlease select from the following menu:");
		
				selection=displayMenu();
		
				printf("\n\nPlease enter your selection now:");
			}while(selection!=Q||q)
		
		return 0;
		
	}
	
char displayMenu()
	{
		char choice;
		printf("\nD:\tMake a deposit");
		printf("\nW:\tMake a withdrawal");
		printf("\nB:\tCheck your account balance");
		printf("\nQ:\tTo quit");
		
		scanf("%c",&choice);
		
		return(choice);
	}