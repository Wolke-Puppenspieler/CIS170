/* Abdulmajid Qublawi
*/

#include<stdio.h>
struct Employee
{
  int id;
  char name[81];
  int hours;
  int rate;
  float insurance;
  float retirement;
};
int main ()
{
	struct Employee cashier;
	float grossPay,deductions,netPay,taxes;
	char repeat;
	do
	{
	printf("\n Star Trek");
	printf("\n Your id ");
	scanf("%d",&cashier.id);
	printf("\n Your name ");
   scanf("\n");
	gets(cashier.name);
	printf("\n Your hours worked");
	scanf("%d",&cashier.hours);
	printf("\n Your hourly rate");
	scanf("%d",&cashier.rate);
	printf("\n Your insurance deduction");
	scanf("%f",&cashier.insurance);
	printf("\n Your retirement deduction");
	scanf("%f",&cashier.retirement);

	grossPay= cashier.hours*cashier.rate;
	deductions = cashier.insurance+cashier.retirement;
	netPay= grossPay-deductions;
	taxes= netPay*.2;
	printf("Employee ID:%d\n",cashier.id);
	printf("Employee name:%s\n",cashier.name);
	printf("Your gross pay is:%.2f\n",grossPay);
	printf("Your total deductions:%.2f\n",deductions);
	printf("Your net pay:%.2f\n",netPay-taxes);

	printf("\n\nDo you want to enter another record?Y/N");
	scanf("\n%c",&repeat);
	}while(repeat!= 'N' && repeat !='n');





return 0;

}

