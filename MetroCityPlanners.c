/* Justin Newman
CIS170 Section 01
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
		/*interestingly enough, a population of 30,000,000 or above exceeds the long int's bounds
        and starts returning junk data for h2oSavings and tCost!*/
		
			
		//Processing
		//integer devision, because partial toilets don't flush well >.<
		toilets=cmtyPop/3;
		flushesDay=toilets*14;
		origLpd=flushesDay*15;
		neueLpd=flushesDay*2;
		h2oSavings=origLpd-neueLpd;
		tCost=toilets*150;
		
		//Output
		printf("The cost of your program will be: $ %ld", tCost);
		printf("\nThe amount of water you will save per day is: %ld liters", h2oSavings);
		
        //Hold output window pending keystroke 
        getch();
		//Got this from google because devC++ doesn't hold the output window after the program completes
		
        return 0;
		
	}
		
		
		
		
		
		
