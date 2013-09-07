/*Justin Newman
Sally's Miles
CIS170 Section 01*/

//load standard libraries
#include<stdio.h>

//program to calculate various mileages for sally and her car
int main()

{
	//define vars
	unsigned int initMi, totalMi;
	int tripFl, tripCo, daily, totalI, tripAvg, totalSal;


	//set variables
	initMi=29926;
	daily=4213;
	tripCo=2781;
	tripFl=2487;

	//processing
	totalMi=initMi+daily+tripCo+tripFl;
	totalI=tripFl+tripCo;
	tripAvg=totalI/2;
	totalSal=daily+totalI;

	//output
	printf("\nSally's total miles driven is %d", totalSal);
	printf("\nHer average miles per trip is %d", tripAvg);
	printf("\nThe total miles on her car is %u", totalMi);


	return 0;

}
