/*Justin Newman
CIS170 Section 01
Pointers Cont'd*/

#include<stdio.h>

void getNumbers(int *, int *);
void findLargest(int , int , int *);
void displayLargest(int );

int main()
	{
		int num1, num2, largest;
		
		getNumbers(&num1, &num2);
		findLargest(num1, num2, &largest);
		displayLargest(largest);
		getch();
		
	return 0;
	}
	
void getNumbers(int *num1P, int *num2P)
	{
		printf("enter a number");
		scanf("%d",num1P);
		printf("enter another number");
		scanf("%d",num2P);
	}
	
void findLargest(int firstNum, int secondNum, int *largest)
	{
		if(firstNum>secondNum)
			{
				*largest=firstNum;
			}
		else
			{
				*largest=secondNum;
			}
	}

void displayLargest(int largestNum)
	{
		printf("the larger number is %d", largestNum);
	}
