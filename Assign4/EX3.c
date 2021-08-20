/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

void reverse()
{
char c;
scanf("%c",&c);
if(c!='\n')
{
    reverse();
    printf("%c",c);
    
}


}



int main()
{
    char a[100];
   
    printf("Enter a sentance:");

    
    reverse();

    return 0;
}
