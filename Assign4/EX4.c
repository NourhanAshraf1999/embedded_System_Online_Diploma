/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int POWER(int a,int b)
{
if(b!=0)
return (a*POWER(a,b-1));
else
return 1;

}



int main()
{
    int a,b,c;
   
    printf("Enter base number:");
    scanf("%d",&a);
    printf("Enter power number(positive integer):");
    scanf("%d",&b);
    
    c= POWER(a,b);
    printf("%d^%d = %d",a,b,c);
    return 0;
}
