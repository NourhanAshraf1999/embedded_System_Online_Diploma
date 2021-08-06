
#include <stdio.h>


int main()
{
int array[100];
int narray[100];
 int i,n,m,z;

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
 printf("Enter element to be inserted: ");
scanf("%d",&z);
  do
 {
    printf("Enter the Loctaion: ");
    scanf("%d",&m);
    
    
 }while((m<0||m>n));

 for(i=0;i<n+1;i++)
 {
    if(i<m-1)
    narray[i]=array[i];
    else 
    {
       if(i==m-1)
        narray[m-1]=z;
        else
        narray[i]=array[i-1];
    }
   
 }
 
for(i=0;i<n+1;i++)
 {
    
     printf("%d ",narray[i]);
 }
    return 0;
}
