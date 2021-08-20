/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void factorial(int a)
{
  int i,product=1;
 
  for(i=1;i<=a;i++)
  {
    
       product*=i;
  }
   printf("factorial of %d=%d",a,product);
}



int main()
{
    int x;
    printf("Enter an positive integar:");
    scanf("%d",&x);
    
    factorial(x);

    return 0;
}
