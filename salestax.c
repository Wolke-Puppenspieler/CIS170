// Justin Newman
//Program to calculate sales tax and total cost

//includes standard io resource
#include<stdio.h>
//replaces every instance of "TAXRATE" with ".06"
#define TAXRATE .06

int main()

	{
			//define variables
			float price;
			float salestax, total;
			printf("Enter the price of the item\n$");
			scanf("%f",&price);

			//process
			salestax=price*TAXRATE;
			total=salestax+price;

			//output
			printf("Your price is $ %.2f",price);
			printf("\nYour sales tax is $ %.2f",salestax);
			printf("\nYour cost is $ %.2f and $ %.2f \n\ntotaling: \n$ %.2f",price,salestax,total);

		return 0;
	}
