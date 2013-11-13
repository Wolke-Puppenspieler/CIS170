/*string intro
CIS 170 Section 01
Justin Newman*/

#include<stdio.h>
#include<stdlib.h>

int main()
    {
          char message[81];
          char greeting[81];
          int i;
          //to copy message to greeting:
          i=0;
          /* less efficient
          while(message[i]!='\0')
          {
               greeting[i]=message[i];
               i++;
          }
          greeting[i]='\0'; 
          */
          //more efficient
          /* more efficient, but not most efficient
          while(greeting[i++]=message[i])
          ;
          //test unneeded beccause null char makes expression have a 0 value 
          //assigns value then checks for 0 value
          //then increments
          //; added to end of while loop because it has no body
          */
          //most efficient:
          char *mPtr, *gPtr;
          mPtr=message;
          gPtr=greeting;
          //subscript notation:
          //greeting[i] equal same thing
          //gPtr[i]
          
          //pointer notation:
         // *(gPtr+i)
          //*greeting+i)
          
          //most efficient:
          while(gPtr++=*mPtr++);
          printf("Enter your name");
          // scanf("%s", message); stops reading after a space
          gets(message);
          // printf("Hello %s", message);
          printf("hello ");
          puts(message);
          puts(greeting);
          //copies string requires stdlib.h (less efficient)
          strcpy(greeting,message);
          
          getch();
    return 0;      
    }
