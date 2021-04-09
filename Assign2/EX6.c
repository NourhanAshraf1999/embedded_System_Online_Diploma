

#include <stdio.h>

int main()
{
    int a,i,sum=0;
    printf("Enter an integer: ");
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
        sum=sum+i;
    }
    printf("Sum = %d ",sum);
    
}
