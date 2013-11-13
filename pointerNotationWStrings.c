/*{
//char myString[10];
char myString[ ]="Hello"; //figures out the string size from the initilizing value

char *otherString;
otherString="goodbye";
 //this creates a memory leak:
}
 
 
 
 
 char *month;
 month="January";

char *greeting[4];

*/

#include<stdio.h>
int main()
{
char *text, *second;
char message[ ]="Do or do not, there is no try";
char blip[ ]="common sense is so uncommon it's marketable";
text=message;
printf("%c",*(text+7)); //prints o
text=&message[4];
printf("%c",*(text+8)); //prints ,
printf("%c",*text--); //prints r
text++;
printf("%c",*--text); //prints o
second=blip;
text=second;
printf("%c",*text++); //prints c
//printf("%s",*++second); //this looks for the addrress
getch();
return 0;

}
