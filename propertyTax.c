/*Justin newman
CIS 170 Section 01
Property tax*/

#include<stdio.h>
double inputTotalSales();
void calculateTaxes(double ,double *, double *);
void displayTaxes(double ,double );

int main()
	{
		double sales, stateTax, countyTax;
		
		sales=inputTotalSales();
		calculateTaxes(sales,&stateTax,&countyTax);
		displayTaxes(stateTax,countyTax);
     getch();
     
    return 0;		
  }
		
		
double inputTotalSales()
	{
		double salesRev;
		printf("Enter gross monthly sales revenue");
		scanf("%lf",&salesRev);
		
	return(salesRev);
	}
void calculateTaxes(double sales, double *stateTx, double *countyTx)
	{
		*stateTx=sales*.04;
		*countyTx=sales*.02;
	}
void displayTaxes(double stateTx,double countyTx)
	{
		printf("The amount of state tax paid is $ %.2lf", stateTx);
		printf("\nThe amount of county tax paid is $ %.2lf", countyTx);
		printf("\nThe total tax paid this month is: $ %.2lf", countyTx+stateTx);
	}
