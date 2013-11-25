/* Statistical Analysis
CIS 170 Section 01
Justin Newman*/

#include<stdio.h>
#define MAX 10
void getData(int []);
void sortData(int []);
void calcStats(int [], float *, float *, float *, int *);
void displayStats(int ,float ,float ,float );

//main function
int main()
	{
		int nums[MAX];
		float median, mode, average;
		int i=0, range;
		
		getData(nums);
		
		for(i=0;i<MAX;++i)
			{
				printf("\n%d", nums[i]);
				
			}
		
		sortData(nums);
		
		printf("\n\n");
		
		for(i=0;i<MAX;++i)
			{
				printf("\n%d", nums[i]);
				
			}
		calcStats(nums, &median, &mode, &average, &range);
		
		
		displayStats(range, average, median, mode);
		
		getch();
		return 0;
	}
	
//gets data from user and stores it in array "nums"
void getData(int nums[MAX])
	{
		int i=0;
		for(i=0;i<MAX;++i)
			{
				printf("enter a number");
				scanf("%d",&nums[i]);
			}
	}
	
//sorts data smallest to largest
void sortData(int nums[MAX])
	{
		int temp;
		int i, j;
	
		for(i=0;i<MAX;++i)
			{
				for(j=i+1;j<MAX;++j)
					{
						if(nums[i]>nums[j])
							{
								temp=nums[i];
								nums[i]=nums[j];
								nums[j]=temp;
							}
					}
			}
	}
//calculate statistics
void calcStats(int nums[MAX], float *median, float *mode, float *avg, int *range)
	{
		int i=0, min=0, max=0, temp, tot=0, graf, derGraf=0, c, j=0;
	
		*range=(nums[9]-nums[0]);
		
		tot=0;
		*median=((nums[4]+nums[5])/2.0);
		for(i=0;i<MAX;++i)
			{
				graf=1;
				for(j=i+1;j<MAX;++j)
					{
						tot=tot+nums[i];
						if(nums[i]==nums[j])
							{graf=graf+1;}
						if(graf>derGraf)
							{derGraf=graf;
							c=i;}
					}
			}
		*avg=tot/10.0;	
		*mode=nums[c];
				
	}
	
void displayStats(int range, float average, float median, float mode)
	{
		printf("\n\nThe range, average, median, and mode are: %d, %.2f, %.2f, %.2f", range, average, median, mode);
	}
