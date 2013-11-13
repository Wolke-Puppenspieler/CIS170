/*small program
CIS 170 Section 01*/

#include<stdio.h>
#include<stdlib.h>

int main()
    {
     int i, random;
     srand(time(0));
     
     for(i=0;i<5;++i)
     {
     
     random=rand()% /*max value*/36 + 0/*min value*/;
     printf("%d \n", random);
     
     //printf("%d \n",rand());
     
     
     }
     getch();
     return 0;
     }
