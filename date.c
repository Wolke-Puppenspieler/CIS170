/*Justin Newman
CIS170 Section 01
9/25/2013
*/

#include<stdio.h>

int isLeap();
void displayDate(int,int);


int main()
	{
		int month, day, year;
		printf("Enter date in following format: mm/dd/yyyy");
		scanf("%d/%d/%d",&month,&day,&year);
		
		displayDate(day,month);
		
		getch();
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
	
void displayDate(day, month)
	{
		int dDay;
		if(day>59&&isLeap()==1)
		switch(isLeap())
			{
			case 1:
				dDay=day+1;
			break;
			case 0:
				dDay=day;
			break;
			}
			
		switch(month)
			{
			case 1:
				printf("January");
			break;
			case 2:
				printf("February");
			break;
			case 3:
				printf("March");
			break;
			case 4:
				printf("April");
			break;
			case 5:
				printf("May");
			break;
			case 6:
				printf("June");
			break;
			case 7:
				printf("July");
			break;
			case 8:
				printf("August");
			break;
			case 9:
				printf("September");
			break;
			case 10:
				printf("October");
			break;
			case 11:
				printf("November");
			break;
			case 12:
				printf("December");
			break;
			}
			
      }
			
				
