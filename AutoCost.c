/*Justin Newman
CIS170 Section 01
Auto cost*/

#include<stdio.h>

//function prototypes
float getLoanPayment();
float getInsurancePayment();
float getGas();
float getOilChanges();
float getMaintenance();
void displayTotals();

int main()

	{
	
		getLoanPayment();
		displayTotals();


		getch();
		return 0;
	}
	
float getLoanPayment()

	{
		int payment; 
		printf("Enter your monthly auto loan payment");
		scanf("%lf",&payment);
		
		return(payment);
	}

float getInsurancePayment()

	{
	
		float insurance, frequency;
		
		printf("Enter your insurance payment");
		scanf("%f",&insurance);
		printf("How many times a year do you pay?");
		scanf("%f",&frequency);
				
		return(insurance/frequency/12);
		
	}
	
float getGas()

	{
	
		float gas, perWeek;
		
		printf("Enter your average fuel fill up cost");
		scanf("%f", gas);
		printf("How often do you fill up per week?");
		scanf("%f", perWeek);
		
		return(gas*perWeek*52/12);
		
	}
		
	
void displayTotals()

	{
	
		printf("Your yearly loan amount is $ %.2f", getLoanPayment()*12);
		
	}
