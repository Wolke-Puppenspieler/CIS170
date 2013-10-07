/*Justin Newman
CIS170 Section 01
Bank Program*/

#include<stdio.h>

void displayMenu();
double getBalance(double );
double getWithdrawal(double );
double getDeposit(double );

int main()
	{
		char selection;
		double balance;

		do
			{
				displayMenu();

				scanf("%c",&selection);

				switch(selection)
					{
					case 'D':case 'd':
						clrscr();
						balance=getDeposit(balance);
					break;
					case 'W':case 'w':
						clrscr();
						balance=balance-getWithdrawal(balance);
					break;
					case 'B':case 'b':
						clrscr();
						printf("Your current balance is: $%.2lf",balance);
					break;
					case 'Q':case 'q':
						printf("Thank you, come again");
					break;
					default :
						printf("Please make a valid selection");
					}

			}while(selection!='Q'||selection!='q');

		return 0;

	}

void displayMenu()
	{
		printf("\nWelcome to HFCC Federal Credit Union");
		printf("\n\nPlease select from the following menu:");
		printf("\n\nD:\tMake a deposit");
		printf("\nW:\tMake a withdrawal");
		printf("\nB:\tCheck your account balance");
		printf("\nQ:\tTo quit");
		printf("\n\nPlease enter your selection now:");
	}
double getBalance(double balance)
    {

     return 0;
    }
double getDeposit(double balance)
    {
    return 0;
    }
double getWithdrawal(double balance)
    {
    return 0;
    }
