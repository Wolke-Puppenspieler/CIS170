/* Justin Newman
CIS170 Section 01
MidTerm Program
BTW: this keyboard sucks!*/

#include<stdio.h>
int validateTime(int , int);
int calcTotalMinutes(int ,int ,int ,int );
float calcFee(float ,int );

//main function
int main()
	{
		//declare vars
		int arrivalHr, arrivalMin, departHr, departMin, check1, minutes;
		char vehType, cust;
	    float charge, totalFee;
		//name und datum auf deutsch (warum nicht?)
		printf("Justin Newman\nEinUndZwanzigste Okt, 2013");
				
        do
			{
				
				do
					{
						//get arrival time
						printf("\n\nPlease enter your arrival time (HH:MM 0-24hr format)");
						scanf("%d:%d",&arrivalHr,&arrivalMin);
						
						//diagnostics
						//printf("\nyour arrival time was %d:%d", arrivalHr, arrivalMin);
						check1=validateTime(arrivalHr,arrivalMin);
						//printf("\ncheck1 return is: %d", check1);
						
					}while(check1!=1);
					
				do
					{
						//get departure time
						printf("\n\nPlease enter your departure time (HH:MM 0-24hr format)");
						scanf("%d:%d",&departHr,&departMin);
						
						//diagnostics
						//printf("\nyour departure time was %d:%d", departHr, departMin);
						check1=validateTimeTwo(arrivalHr,arrivalMin,departHr,departMin);
						//printf("\ncheck1 return is: %d", check1);
						
					}while(check1!=1);
				
				minutes=calcTotalMinutes(arrivalHr, arrivalMin, departHr, departMin);
				
				printf("\n\nyour arrival time was %d:%d, and your departure time was %d:%d",arrivalHr,arrivalMin,departHr,departMin);
				
				//prompt user for vehicle type and take in selection		
				printf("\nEnter the type of vehicle are you parking in our facility today?");
				printf("\nCar:\t\t\t enter C\t -$2.00 per 30min");
				printf("\nSUV/Passenger truck:\t enter T\t -$3.00 per 30min");
				printf("\nCamper/Trailer:\t\t enter R\t -$5.50 per 30min");
				printf("\nAll others:\t\t enter O\t -$6.50 per 30min\n");
				scanf("\n%c",&vehType);
				
				//set fee based on vehicle type selection	
				switch(vehType)
					{
					case 'c':case 'C':
						charge=2.00;
					break;
					case 't':case 'T':
						charge=3.00;
					break;
					case 'r':case 'R':
						charge=5.50;
					break;
					case 'o':case 'O':
						charge=6.50;
					break;
					}	
					
				totalFee=calcFee(charge,minutes);
				//print total fee
				printf("\nYour total parking fee is %.2f",totalFee);
				//ask for additional customers
                printf("\nis there another customer? y/n");
				scanf("\n%c",&cust);
			
			}while(cust=='y');
		
		getch();
		return 0;
	}	

//validates time input
int validateTime(int hrs, int mins)
	{
		if((24>=hrs)&&(hrs>=0)&&(59>=mins)&&(mins>=0))
			{
				return 1;
			}
		else
			{
				return 0;
			}
	}

//calcTotalMinutes function from k-drive
int calcTotalMinutes(int hin, int min, int hout,int mout)
{
 int time, hour, minute;


 minute = (60-min)+mout;
 hour = hout-hin-1;
 if (minute > 59)
 {
	hour++;
	minute-=60;
 }
 time=hour*60+minute;

 printf("\n\nTotal time is %02d:%02d", hour, minute);
 printf("\n\nTotal time in minutes is %d", time);

 return time;

}

//calculates total parking fee
float calcFee(float charge, int minutes)
	{
		float fee;
		fee=(minutes/30)*charge;
		if(minutes%30>0)
			fee=fee+charge;
	
		return(fee);
	}
	
//unneeded additional time validations 
	int validateTimeTwo(int aHrs, int dHrs, int aMins, int dMins)
	{
		if((((24>=dHrs)&&(dHrs>=0))&&((59>=dMins)&&(dMins>=0)))&&((dHrs>=aHrs)||((dHrs==aHrs)&&(dMins>=aMins))))
			{
				return 1;
			}
		else
			{
				return 0;
			}
	}	

