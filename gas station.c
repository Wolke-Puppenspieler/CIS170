/*Justin Newman
CIS 170 Section 01
Gas Station*/

#include<stdio.h>
void displayMenu(float []);
void getInfo(int *, float *, int *);
void getGasRate(int *, float *, float *, int *, int *, int );
void getWashRate(int , float *, float *);
void calcAmount(float , float , float , int , double *);

int main()
	{
		int fuelType, carWash;
		float gallons, gasPrices[4]={3.999,4.099,4.199,4.299}, fuelRate, washPrice[4]={3.50,3.00,3.00,2.50}, washRate;
		char cust, response;
		double totalGals, totalCharge, galsSold[4]={0,0,0,0};
		int custs[4]={0,0,0,0}, carWashes[4]={0,0,0,0};
		
		do{
			system("cls");
		
			displayMenu(gasPrices);
			getInfo(&fuelType, &gallons, &carWash);
			getGasRate(&fuelType, gasPrices, &fuelRate, custs, carWashes, carWash);
			getWashRate(fuelType, &washRate, washPrice);
			calcAmount(fuelRate, gallons, washRate, carWash, &totalCharge);
			galsSold[(fuelType-1)]=galsSold[(fuelType-1)]+gallons;
			totalGals=totalGals+gallons;
		
			do{
			
				printf("\nanother customer? (Y or N)");
				scanf("\n%c", &cust);
				
				switch(cust)
					{
						case 'y':case 'Y':
							response='Y';
						break;
						case 'n':case 'N':
							response='N';
						break;
						default :
							response='f';
						
					}
					
			}while(response=='f');
			
		}while(cust=='Y'||cust=='y');
		
		printf("\nthe total number of economy customers was %d", custs[0]);
		printf("\nthe total number of regular customers was %d", custs[1]);
		printf("\nthe total number of mid-grade customers was %d", custs[2]);
		printf("\nthe total number of premium customers was %d", custs[3]);
		printf("\nthe total number of economy gallons sold was %.2lf", galsSold[0]);
		printf("\nthe total number of regular gallons sold was %.2lf", galsSold[1]);
		printf("\nthe total number of mid-grade gallons sold was %.2lf", galsSold[2]);
		printf("\nthe total number of premium gallons sold was %.2lf", galsSold[3]);
		printf("\nthe total number of type 1 car washes was %d", carWashes[0]);
		printf("\nthe total number of type 2 car washes was %d", carWashes[1]);
		printf("\nthe total number of type 3 car washes was %d", carWashes[2]);
		printf("\nthe total number of type 4 car washes was %d", carWashes[3]);
		printf("\nthe total gallons of fuel sold was %.2lf", totalGals);
		printf("\nthe total take for the day was $%.2lf", totalCharge);
		
	return 0;
	
	}
	
void displayMenu(float gasPrices[4])
	{
		printf("welcome to our state-of-the-art automotive fueling facility");
		printf("\n\nPlease select a grade of fuel");
		printf("\n\nGrade\t\tPrice\tSelection");
		printf("\n\nEconomy\t\t%.3f\t1",gasPrices[0]);
		printf("\nRegular\t\t%.3f\t2",gasPrices[1]);
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
	
void getGasRate(int *fuelType, float *gasPricesPtr, float *fuelRate, int *custType, int *carWashes, int carW)
	{
		int offset;
		offset=*fuelType-1;
		*fuelRate=*(gasPricesPtr+offset);
		*(custType+offset)=*(custType+offset)+1;
		if(carW==1)
		{*(carWashes+offset)=*(carWashes+offset)+1;}
	}
		
void getWashRate(int fuelType, float *washRate, float *washPricePtr)
	{
		int offset;
		offset=fuelType-1;
		*washRate=*(washPricePtr+offset);
	}
	
void calcAmount(float gasRate, float gallons, float washRate, int carWash, double *total)
	{
		float fuelCost, washCost;
		fuelCost=gallons*gasRate;
		printf("\nYour fuel charge is $%.2f",fuelCost);
		if((gallons>=10)&&(carWash==1))
			{washCost=washRate-1;
			printf("\nYour carwash charge is $%.2f",washCost);}
		*total=*total+(fuelCost+washCost);
		
		printf("\n\nYour total due is $%.2f", (fuelCost+washCost));
	}
