/*Justin Newman
CIS 170 Section 01
Gas Station*/

#include<stdio.h>
void displayMenu(float []);
void getInfo(int *, float *, int *);
void getGasRate(int *, float [], float *);
void getWashRate();
void calcAmount();

int main()
	{
		int fuelType, carWash;
		float gallons, gasPrices[4]={3.999,4.099,4.199,4.299}, *gasPricesPtr=&gasPrices, fuelRate, washRate[4]={3.50,3.00,3.00,2.50};
		displayMenu(gasPrices);
		getInfo(&fuelType, &gallons, &carWash);
		getGasRate(&fuelType, gasPricesPtr, &fuelRate);
		printf("%.3f",fuelRate);
		
	return 0;
	
	}
void displayMenu(float gasPrices[4])
	{
		printf("welcome to our state-of-the-art automotive fueling facility");
		printf("\n\nPlease select a grade of fuel");
		printf("\n\nGrade\t\tPrice\tSelection");
		printf("\n\nEconomy\t\t%.3f\t1",gasPrices[0]);
		printf("\n\Regular\t\t%.3f\t2",gasPrices[1]);
		printf("\nMid-Grade\t%.3f\t3",gasPrices[2]);
		printf("\nPremium\t\t%.3f\t4",gasPrices[3]);
		
	}
		
void getInfo(int *fuelType, float *gallons, int *carWash)
	{
		char carW;
		do{
		printf("\n\nPlease make your fuel grade selection from the above menu:");
		scanf("%d",fuelType);
		}while((*fuelType<1)||(*fuelType>4));
		
		do{
		printf("\nPlease enter desired number of gallons:");
		scanf("%f",gallons);
		}while(*gallons<=0);
		
		do{
		printf("\nWould you like a car-wash? (Y or N)");
		scanf("\n%c",&carW);
		
		switch(carW)
			{
				case 'Y':case 'y':
					carW='Y';
					*carWash=1;
				break;
				case 'N':case 'n':
					carW='N';
					*carWash=0;
				break;
			}
			
		}while((*carWash!=1)&&(*carWash!=0));
	}
void getGasRate(int *fuelType,float *gasPricesPtr,float *fuelRate)
	{
		int offset;
		offset=*fuelType-1;
		*fuelRate=*(gasPricesPtr+offset);
	}
		
