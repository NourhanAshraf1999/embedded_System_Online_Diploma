
#include <stdio.h>
#define m 2 
#define n 2

int main()
{
    float array[n][m];
    float array2[n][m];
    float sum[n][m];
    int i,j;
    //take values of 1st matrix
    printf("Enter the element of the 1st matrix \n");
    for(i=0;i<n;i++)
    {
       
        for(j=0;j<m;j++)
        {
            printf("Enter a%d%d: ",i+1,j+1);
            scanf("%f",&array[i][j]);
            printf("\n");
        }
    }
     //take values of 2nd matrix
    printf("Enter the element of the 2nd matrix \n");
       for(i=0;i<n;i++)
    {
      
        for(j=0;j<m;j++)
        {
            printf("Enter b%d%d: ",i+1,j+1);
            scanf("%f",&array2[i][j]);
            printf("\n");
        }
    }
    //calculate sum of 2 matrices
      for(i=0;i<n;i++)
    {
        
        for(j=0;j<m;j++)
        {
           sum[i][j]=array[i][j]+array2[i][j];
        }
    }
    //print the sum
      printf("Sum Of Matrix:\n");
      for(i=0;i<n;i++)
    {
        
        for(j=0;j<m;j++)
        {
            printf("%f",sum[i][j]);
            printf("\t");
           
        }
         printf("\n");
        
    }
    
    
    

    return 0;
}
