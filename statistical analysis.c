/* Statistical Analysis
CIS 170 Section 01
Justin Newman*/

#include<stdio.h>
#define MAX 10
void getData(int []);
void sortData(int []);
void calcStats(int [], float *, float *, float *, int *);
void displayStats(int [], float *, float *, float *, int *);

//main function
int main()
	{
		int nums[MAX];
		float median, mode, average;
		int i=0, range;
		
		getData(nums);
		
		for(i=0;i<9;++i)
			{
				printf("\n%d", nums[i]);
				
			}
		
		sortData(nums);
		
		printf("\n\n");
		
		for(i=0;i<9;++i)
			{
				printf("\n%d", nums[i]);
				
			}
		calcStats(nums, &median, &mode, &average, &range);
		printf("%d, %.2f,", range, average);
		

		
		getch();
		return 0;
	}
	
//gets data from user and stores it in array "nums"
void getData(int nums[MAX])
	{
		int i=0;
		for(i=0;i<9;++i)
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
	
		for(i=0;i<9;++i)
			{
				for(j=i+1;j<9;++j)
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
		int i=0, min=0, max=0, temp, tot=0;
		for(i=0;i<9;++i)
			{
				if(max<=nums[i])
				{max=nums[i];}
				if(min>=nums[i])
				{min=nums[i];}
				tot=tot+nums[i];
			}
		*range=(max-min);
		*avg=tot/10.0;
	
		
	}
