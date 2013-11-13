/*arrays practice
justin newman*/


int main()
	{
		int i=0;
        float amount[6]={-17.27,-22.70,-18.87,-20.37,-6.37,-12.77}, largest, smallest;
		for(i=0;i<6;++i)
		{
		printf("\n%.2f",amount[i]);
		}
		
		
		i=0;
		largest=amount[0];
		for(i=0;i<6;++i)
		{
			if(amount[i]>largest)
			{
			largest=amount[i];
			}
		}
		printf("\nthe largest number is: %.2f", largest);
		
		i=0;
		smallest=amount[0];
		for(i=0;i<6;++i)
		{
			if(amount[i]<smallest)
			{
				smallest=amount[i];
			}
		}
		printf("\nthe smallest number is: %.2f", smallest);
		getch();
	return 0;
	}
