/*array practice 2
Justin Newman*/

int main()
	{
		int i;
		float num;
		float meh[6];
		for(i=0;i<6;++i)
		{
			printf("enter a number");
			scanf("%f",&meh[i]);
		}
		i=0;
		for(i=5;i>=0;--i)
		{
			printf("\n%.2f",meh[i]);
			if(meh[i]==26)
			{
				printf("\nFound 26!!!");
				break;
			}
		}
       
		getch();
	return 0;
	}
