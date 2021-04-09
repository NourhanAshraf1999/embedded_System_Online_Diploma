

#include <stdio.h>

int main()
{
    int a,i,fact=1;
    printf("Enter an integer: ");
    scanf("%d",&a);
    if(a<0)
    printf("Error!!! Factorial of negative number doesn't exist.");
    else
    {
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("Factorial = %d ",fact);
    
    }
    
    
}
