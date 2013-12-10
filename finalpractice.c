//comments
#include<stdio.h>
#define SIZE=5
float calcArea(float float);
int main()
	{
	int streetNo, i=0;
	long int zipcode;
	char street[81], city[81], state[3];
	float rooms[5], length, width, squareFootage;
	printf("Justin Newman");
	printf("\n\nplease enter your address");
	printf("\nPlease enter the street #");
	scanf("%d",&streetNo);
	printf("\nPlease enter the street name");
	gets(street);
	printf("\nPlease enter the name of your city");
	gets(city);
	printf("\nplease enter your zip code");
	scanf("%ld", &zipcode);
	printf("please enter your 2-digit state abbreviation (eg, "MI")");
	scanf("%s",state);
	
	for(i=0;i<5;i++)
		{
			printf("please enter the length of room %d", i);
			scanf("%f",&length);
			printf("please enter the width of room %d", i);
			scanf("%f",&width);
			rooms[i]=calcArea(length, width);
		}
	
	return 0;
	}
	
float calcArea(float l,float w)
	{
		float area;
		area=l*w;
	return(area);
	}

