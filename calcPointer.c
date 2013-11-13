/*Justin Newman
CIS 170 Sections 01
pointer practice*/

#include<stdio.h>

void calc(float l, float w, float *, float *);

int main()
	{
		float length, width, area, perimeter;
		
		printf("Please enter the length of the room in feet");
		scanf("%f",&length);
		printf("Enter the width of the room in feet");
		scanf("%f",&width);
		calc(length, width, &area, &perimeter);
		printf("the area of the room is %.2f sqft",area);
		printf("\nthe perimeter of your room is %.2f sqft",perimeter);
		getch();
	
	return 0;
	}
	
void calc(float l, float w, float *a, float *p)
	{
		*a=l*w;
		*p=(2*l)+(2*w);
	}
