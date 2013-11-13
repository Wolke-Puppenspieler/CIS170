/* Statistical Analysis
CIS 170 Section 01
Justin Newman*/

#include<stdio.h>
void getData(int []);
int main()
	{
		int nums[10], i=0;
		getData(nums);
		getch();
		for(i=0;i<9;++i)
			{
				printf("%d", nums[i]);
				
			}
		return 0;
	}
void getData(int nums[10])
	{
		int i=0;
		for(i=0;i<9;++i)
			{
				printf("enter a number");
				scanf("%d",&nums[i]);
			}
	}
