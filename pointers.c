/*Justin Newman
pointers
*/

#include<stdio.h>

void calculate(float ,float y,float *,float *);

int main()
	{
		float num1, num2, sum, product;
		
		printf("Enter a number");
		scanf("%f",&num1);
		printf("Enter another number");
		scanf("%f",&num2);
		
		calculate(num1,num2,&sum,&product);
		
		printf("\nthe sum is %.2f",sum);
		printf("\nthe product is %.2f",product);
		
		getch();
		
	return 0;
	}
	
void calculate(float x,float y,float *sumP,float *prodP)
	{
		*sumP=x+y;
		*prodP=x*y;
		
	}
