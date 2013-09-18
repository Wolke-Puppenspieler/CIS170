/*Justin Newman
CIS170 Section 01
If Statements 9/18/2013*/

#include<stdio.h>

int main()
	{
	
		float weight;
		
		printf("Enter the weight of the package to be shipped (in pounds)");
		scanf("%f",&weight);
		
		if(weight<=2.0)
		{
			printf("The cost to ship your package is $ %.2f", weight*1.10);
		}
		else if(weight>2.0 && weight<=6.0)
			{
				printf("The cost to ship your package is $ %.2f", weight*2.20);
			}
			else if(weight>2.0 && weight<=10.0)
				{
					printf("the cost to ship your package is $ %.2f", weight*3.70);
				}
				else if(weight>10.0)
					{
					printf("The cost to ship your package is $ %.2lf", weight*3.80);
					}
	
		getch();
		
        return 0;
		
	}
			
