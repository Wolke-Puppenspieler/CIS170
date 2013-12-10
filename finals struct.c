struct Employee
{
	int id;
	char name[81];
	float hours;
	float rate;
	float insurance;
	float retirement;
};

int main()
	{
		printf("yourname");
		
		struct Employee cashier;
		
		printf("\nyour id?");
		scanf("%d",&cashier.id);
		printf("\nyour name");
		gets(cashier.name);
		printf("\nyour hours");
		scanf("%f",&cashier.hours);
		printf("\nyour rate");
		scanf("%f",&cashier.rate);
		printf("\nyour insurance");
		scanf("%f",&cashier.insurance);
		printf("\nyour retirement");
		scanf("%f",&cashier.retirement);
	
		grossPay=cashier.hours*cashier.rate;
		deductions=cashier.insurance+cashier.retirement;
		netPay=grossPay-deductions;
		
		