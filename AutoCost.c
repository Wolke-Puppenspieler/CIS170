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
unsigned int getMiles();
void displayTotals();

//main function
int main()

	{
	
		displayTotals();


		getch();
		return 0;
	}

//get loan payments	
float getLoanPayment()

	{
		float payment; 
		printf("Enter your monthly auto loan payment");
		scanf("%f",&payment);
		
		return(payment);
	}

//get insurance payments
float getInsurancePayment()

	{
	
		float insurance, frequency;
		
		printf("Enter your insurance payment");
		scanf("%f",&insurance);
		printf("How many times a year do you pay?");
		scanf("%f",&frequency);
				
		return(insurance*frequency/12.0);
		
	}

//get monthly gas cost	
float getGas()

	{
	
		float gas, perWeek;
		
		printf("Enter your average fuel fill up cost");
		scanf("%f",&gas);
		printf("How often do you fill up per week?");
		scanf("%f",&perWeek);
		
		return(gas*perWeek*52/12.0);
		
	}

//get monthly oil cost	
float getOilChanges()

	{
	
		float oilCost;
		int	frequency;
		printf("What is your average oil change cost?");
		scanf("%f",&oilCost);
		printf("How many times a year do you change your oil?");
		scanf("%d",&frequency);
		
		return((oilCost*frequency)/12.0);
		
	}

//get monthly maintenance cost		
float getMaintenance()

	{
	
		float maintenance;
		printf("Enter your average yearly maintenance cost");
		scanf("%f",&maintenance);
		
		return(maintenance/12.0);
		
	}
//get miles driven
unsigned int getMiles()
	{
		unsigned int miles;
		printf("How many miles do you drive per year?");
		scanf("%ld",&miles);
		
		return(miles);
		
	}

//display output	
void displayTotals()

	{
		//declare vars
		float loan, insurance, gas, oil, maintenance;
		unsigned int miles;
		
		//get var values from other functions
		loan=getLoanPayment();
		insurance=getInsurancePayment();
		gas=getGas();
		oil=getOilChanges();
		maintenance=getMaintenance();
		miles=getMiles();
		
		//output
        printf("\nYour loan cost is %.2f monthly and %.2f yearly", loan,loan*12);
        printf("\nYour insurance cost is %.2f monthly and %.2f yearly", insurance,insurance*12);
		printf("\nYour fuel cost is %.2f monthly and %.2f yearly", gas,gas*12);
		printf("\nYour oil cost is %.2f monthly and %.2f yearly", oil,oil*12);
		printf("\nYour maintenance cost is %.2f monthly and %.2f yearly", maintenance,maintenance*12);
		printf("\nYour cost per mile is $%.2f", ((loan+insurance+gas+oil+maintenance)*12.0)/miles);
		printf("\nYour total cost of ownership is %.2f monthly and %.2lf yearly", loan+insurance+gas+oil+maintenance, (loan+insurance+gas+oil+maintenance)*12); 
	}
