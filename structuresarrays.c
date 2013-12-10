/*structures assignment
CIS 170 Section 01
Justin Newman*/

#include<stdio.h>

struct Student
	{
		long int studentId;
		char studentName[26];
		int credits;
		float gpa;
		int gradM;
		int gradY;
	};

int main()
	{
		struct Student studentA;
		printf("Enter the student's id #");
		scanf("%ld", &studentA.studentId);
		printf("Enter the student's name");
		fgets(studentA.studentName);
		printf("Enter the student's # of credits");
		scanf("%d", &studentA.credits);
		printf("Enter the student's gpa");
		scanf("%f", &studentA.gpa);
		printf("Enter the student's graduation month");
		scanf("%ld", &studentA.gradM);
		printf("Enter the student's graduation yr");
		scanf("%ld", &studentA.gradY);
	return 0;
	}
