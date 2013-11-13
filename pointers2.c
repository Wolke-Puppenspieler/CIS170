/*Justin Newman
CIS 170 Section 01
Pointers notes 10/9/13*/

#include<stdio.h>

void getData(float *, float *);
void calcData(float, float, float *, float *);
void displayData(float ,float );

int main()
	{
		float hours, rate, netPay, grossPay;
		
		getData(&hours,&rate);
		calcData(hours, rate, &netPay, &grossPay);
		displayData(netPay, grossPay);
		
		getch();
		
		return 0;
	}
	
void getData(float *hoursP, float *rateP)
	{
		printf("enter your hours worked");
		scanf("%f",hoursP); //no & or * for scanf
		printf("enter your hourly pay rate");
		scanf("%f",rateP);
		
	}
	
void calcData(float hours, float rate, float *netPayP, float *grossPayP)
	{
		*grossPayP=hours*rate;
		*netPayP=*grossPayP*.80;
	}

void displayData(float net, float gross)
	{
		printf("your gross pay is: $ %.2f", gross);
		printf("\nyour net pay is: $ %.2f", net);
	}
