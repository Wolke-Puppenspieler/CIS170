/*Justin Newman
CIS 170 Section 01
Vowel Count*/

#include<stdio.h>

int main()
	{
		char stuffs[81], vowels[5]={'A','E','I','O','U'};
		int count[5]={0,0,0,0,0}, i=0;
		gets(stuffs);
		
		for(i=0;stuffs[i]!='\0';i++)
			{
				switch(stuffs[i])
					{
					case 'A':case 'a':
						count[0]++;
						break;
					case 'E':case 'e':
						count[1]++;
						break;
					case 'I':case 'i':
						count[2]++;
						break;
					case 'O':case 'o':
						count[3]++;
						break;
					case 'U':case 'u':
						count[4]++;
						break;
					}
			}
			
		for(i=0;i<5;++i)
			{
				printf("\n %c's: \t %d", vowels[i],count[i]);
			}
			
		getch();
			
		return 0;
		
	}
				
						
					
