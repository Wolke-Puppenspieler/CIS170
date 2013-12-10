//comments
#include <stdio.h>
#define SIZE 5
float calcArea(float , float );
float squareFootage(float *);

int main()
{
	char address[81],city[81],state[3];
	long int zipCode;
	float length, width;
	float rooms[SIZE],squareFoot;
	int i;

	  printf("Your name\n");
	  printf("Please enter your address");
	  gets(address);
	  printf("Please enter your city");
	  gets(city);
	  printf("Please enter your state");
	  gets(state);
	  printf("Please enter your zip code");
	  scanf("%ld",&zipCode);

	  for (i=0; i<SIZE; i++)
	  {
		printf("Enter the length of the room ");
		scanf("%f", &length);
		printf("Enter the width of the room ");
		scanf("%f", &width);
		rooms[i] =calcArea(length, width);
	  }

	  squareFoot = squareFootage(rooms);

	  printf("\nYour property address is: ");
	  printf("\n%s",address);
	  printf("\n%s",city);
	  printf("  %s",state);
	  printf("  %ld",zipCode);
	  printf("\nThe total square footage for this house is %.2f sq. ft.",squareFoot);

return 0;
}

float calcArea(float length, float width)
{
	float area=length*width;
	return area;
}

float squareFootage(float *rooms)
{
	float total=0;
	for(int i=0;i<SIZE;i++)
	{
	total+= *(rooms+i);
	}
	return total;
}

