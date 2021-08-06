
#include <stdio.h>
#include <string.h>


int main()
{
   char c[100];
   int i,count=0;
   char a;
   printf("Enter a string: ");
   printf("\n");
   gets(c);
   printf("Enter a character to find frequency: ");
scanf("%c",&a);
   for( i=0;i<strlen(c);i++)
   {
       if(c[i]==a)
         count++;
   }
   printf("Frequency of %c = %d",a,count);

    return 0;
}
