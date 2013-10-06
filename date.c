/*Justin Newman
CIS170 Section 01
9/25/2013
*/

//include standard io operations
#include<stdio.h>

//function prototypes
int isLeap(int);
void displayDate(int,int,int);

//main function
int main()
	{
		//define vars
		int month, day, year;
		
		//get usr input
		printf("Enter date in following format: mm/dd/yyyy");
		scanf("%d/%d/%d",&month,&day,&year);
		
		//call displayDate function
		displayDate(day,month,year);
		
		getch();
		return 0;
	}
//calculate leap year yes/no
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
//display output		
void displayDate(day, month, year)
	{
		
		printf("Your date, ");
		
		
		//calculate month name from # entered, enumerate day value, and output that info	
		switch(month)
			{
			case 1:
				printf("January  %d, %d, ", day,year);
				printf(" is day number %d", day);
			break;
			case 2:
				printf("February %d, %d, ", day,year);
				printf(" is day number %d", day+31+isLeap(year));
			break;
			case 3:
				printf("March %d, %d, ", day,year);
				printf(" is day number %d", day+59+isLeap(year));
			break;
			case 4:
				printf("April %d, %d, ", day,year);
				printf(" is day number %d", day+90+isLeap(year));
			break;
			case 5:
				printf("May %d, %d, ", day,year);
				printf(" is day number %d", day+120+isLeap(year));
			break;
			case 6:
				printf("June %d, %d, ", day,year);
				printf(" is day number %d", day+151+isLeap(year));
			break;
			case 7:
				printf("July %d, %d, ", day,year);
				printf(" is day number %d", day+181+isLeap(year));
			break;
			case 8:
				printf("August %d, %d, ", day,year);
				printf(" is day number %d", day+212+isLeap(year));
			break;
			case 9:
				printf("September %d, %d, ", day,year);
				printf(" is day number %d", day+243+isLeap(year));
			break;
			case 10:
				printf("October %d, %d, ", day,year);
				printf(" is day number %d", day+273+isLeap(year));
			break;
			case 11:
				printf("November %d, %d, ", day,year);
				printf(" is day number %d", day+304+isLeap(year));
			break;
			case 12:
				printf("December %d, %d, ", day,year);
				printf(" is day number %d", day+334+isLeap(year));
			break;
			}
			
      }
			
				
