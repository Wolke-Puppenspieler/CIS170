/*Justin Newman
Example program
Functions
CIS170 Section 01*/

#include<stdio.h>
float addNumbers(float, float); //prototype
void  printOut(float );
float getNum();

//parenthesis indicate a function, ie. int main(), printf(), scanf()
int main()

	{
		/*
		float num1, num2;
		*/
		
		/*
		m1=getNum();
		num2=getNum();
		*/
		/*
		sum=addNumbers(num1,num2); //sends the VALUES of the variables, not the variables themselves
		*/
		
		printOut(addNumbers(getNum(),getNum())); //nested function calls
		
		getch();
		
		return 0;
		
	}
	
float    addNumbers(float num1, float num2) //initializes two NEW variables with the values obtained earlier

    /*{
       
       float sum; //creates new varaible "sum"
       
       sum=num1+num2;
       
       return sum; //returns the VALUE of sum, not the sum variable | must be same datatype as function name line
            
    }	*/
    
//more efficient
	{
                
       return(num1+num2);
       
	}	
	
void	printOut(float sum) //void return-datatype indicates no Return necessary
	{
	
	printf("The sum of your numbers is %f", sum);
	
	}
	
float	getNum()
	{
	
	float x;
	printf("Enter a number");
	scanf("%f",&x);
	
	return(x);
	}
