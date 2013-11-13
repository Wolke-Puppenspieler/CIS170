
#include<stdio.h>

void loadArray(float [], int );
void printArray(float [], int );


int main()
	{
		float prices[5], rent[8];
		printaArray(prices, 5);
		loadArray(prices, 5);
		loadArray(rent, 8);
		
	return 0;
	}
	
void loadArray(float array[], int size)
	{
	int i;
	for(i=0;i<5;++i)
		{
			printf("enter price");
			scanf("%f",&prices[i]);
		}
	}
	
void printArray(float array[5], int size)
	{
		for(i=0;i<size;++i)
			{
				int i;
				printf("%.2f",array[i]);
			}
	}
	