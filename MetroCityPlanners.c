/* 

Metro City Planners
Program to calculate water usage reduction and cost
for water conservation project*/

#include<stdio.h>

int main()

	{		
		//Define vars
		long int cmtyPop, h2oSavings, toilets, flushesDay, tCost, origLpd, neueLpd;
		
		//Get input
		printf("Enter the community's population");
		scanf("%ld",&cmtyPop);
			
		//Processing
		toilets=cmtyPop/3;
		flushesDay=toilets*14;
		origLpd=flushesDay*15;
		neueLpd=flushesDay*2;
		h2oSavings=origLpd-neueLpd;
		tCost=toilets*150;
		
		//Output
		printf("The cost of your program will be: $ %ld", tCost);
		printf("\nThe amount of water you will save per day is: %ld liters", 2oSavings);
		
		return 0;
	}
		
		
		
		
		
		
