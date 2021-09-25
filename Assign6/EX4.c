
#include <stdio.h>
#include<string.h>

int main()
{
    int a[15];
    int *p;
    p=a;
    int i,n;
    printf("Input the number of elements to store in arrays: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("element - %d:",i+1);
        scanf("%d",&a[i]);
        p++;
    }
    p--;
    for(i=n-1;i>=0;i--)
    {
        printf("element - %d:",i+1);
        printf("%d \n",*p);
        
       
         p--;
    }
    
   
    
    
    
   
   
     
   
    


    return 0;
}
