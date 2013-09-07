/*Buffer issue program
Justin Newman
CIS170 Section 01*/

#include<stdio.h>

int main()

{
	int favNum;
	char firstInit,lastInit;

		printf("Enter your favorite number");
		scanf("%d",&favNum);

		printf("Enter your first initial");
		scanf("\n%c",&firstInit);

		printf("Enter your last initial");
		scanf("\n%c",&lastInit);

		printf("\nYour favorite number is %d and your initials are %c and %c", favNum, firstInit, lastInit);


	return 0;
}