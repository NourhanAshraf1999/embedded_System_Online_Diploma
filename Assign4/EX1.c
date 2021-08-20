/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void prime (int a,int b)
{
  int i,j,flag=0;
  printf("Prime numbers between %d and %d are:",a,b);
  for(i=a;i<=b;i++)
  {
     //loop from (1->i-1)
     for(j=2;j<i/2;j++)
     {
         //if it's not prime set the flag and get out the loop
         if(i%j==0)
         {
             flag=1;
             break;
         }
       
     }
     //whenever flag is zero it's prime number
     if(flag==0)
     {
           
         printf(" %d ",i);
     }
     //reset flag to reloop
     flag=0;
  }
}



int main()
{
    int x,y;
    printf("Enter two numbers(intervals):");
    scanf("%d",&x);
    scanf("%d",&y);
    prime(x,y);

    return 0;
}
