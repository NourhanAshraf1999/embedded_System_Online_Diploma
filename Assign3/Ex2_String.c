
#include <stdio.h>
//#include <string.h>


int main()
{
   char c[100];
   int count=0;
   printf("Enter a string: ");
   scanf("%s",c);
   while(c[count]!='\0')
   {
       
       count++;
       
   }
   printf("Length of string:%d",count);

    return 0;
}
