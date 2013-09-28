/*Justin Newman
CIS170 Section 01
9/25/2013
*/

#include<stdio.h>

int isLeap();
void displayDate();


int main()
	{
		int month, day, year;
		printf("Enter date in following format: mm/dd/yyyy");
		scanf("%d/%d/%d, &month, &day, &year);
		
		displayDate();
		
		return 0;
	}

int isLeap(year)
	{
		int leap;
		if(year%4==0&&year%100>0||year%400==0)
			{
			leap=1;
			}
		else
			{
			leap=0;
			}
			
		return(leap);
	}
	
void displayDate()
	{
		int dDay;
		
		switch(isLeap())
			{
			case 1:
				dDay=day+1;
			break;
			case 0:
				dDay=day;
			break:
			}
		
				