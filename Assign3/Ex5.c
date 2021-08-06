
#include <stdio.h>


int main()
{
int array[100];

 int i,n,z;

 do
 {
    printf("Enter no. of Elemnts: ");
    scanf("%d",&n);
    
    
 }while((n<0||n>100));

 for(i=0;i<n;i++)
 {
     scanf("%d",&array[i]);
     printf("%d ",array[i]);
 }
  printf("\n");
 printf("Enter element to be searched: ");
scanf("%d",&z);
 
 for(i=0;i<n;i++)
 {
   if(array[i]==z)
   {
       printf("Number found at location = %d",i+1);
   }
 }
 

    return 0;
}
