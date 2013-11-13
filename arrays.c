/*arrays
justin newman*/

#include<stdio.h>

int main()
	{	
	int temp[7], i; //array declaration 7==size of array | temp=pointer constant
	/*this line allocates 7 contiguous memory locations, and creates 
	a pointer variable (constant) that contains the starting location of the array*/
	temp[0]=45; //0 offset from starting location (must be an integer)
	temp[6]=65; //6 offset from starting location (final memory location in array)
	temp[7]=72; //7 offset, outside of bounds, no compiler error given (Baaaaddd shit can/will happen)
	
	for(i=0; i<7; i++)
		{
			scanf("%d",temp[i]);
			printf("%d",temp[i]);
		}
			
			
	
	
	
	