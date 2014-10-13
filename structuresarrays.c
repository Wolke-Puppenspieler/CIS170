/*structures assignment
CIS 170 Section 01
Justin Newman*/

#include<stdio.h>

struct Student
	{
		long int id;
		char name[81];
		int credits;
		float gpa;
		int gradM;
		int gradY;
	};

int main()
	{
		struct Student studenta;
		
		printf("Enter the student's id #");
		scanf("%ld", &studenta.id);
		printf("Enter the student's name");
		scanf("\n");
		gets(studenta.name);
		printf("Enter the student's # of credits");
		scanf("%d", &studenta.credits);
		printf("Enter the student's gpa");
		scanf("%f", &studenta.gpa);
		printf("Enter the student's graduation month");
		scanf("%d", &studenta.gradM);
		printf("Enter the student's graduation yr");
		scanf("%d", &studenta.gradY);
		
		
		
		printf("\n%ld",studenta.id);
		printf("\n%s",studenta.name);
		printf("\n%d",studenta.credits);
		printf("\n%.3f",studenta.gpa);
		printf("\n%d",studenta.gradM);
		printf("\n%d",studenta.gradY);
		
	return 0;
	}
