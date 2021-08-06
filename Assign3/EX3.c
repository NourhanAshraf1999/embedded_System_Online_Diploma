
#include <stdio.h>


int main()
{
int array[100][100];
int tarray[100][100];
 int i,j,n,m;
 //input data values
 do
 {
    printf("Enter rows and column of matrix: ");
    scanf("%d",&n);
    scanf("%d",&m);
    
 }while((n<0||n>100)||(m<0||m>100));
 //input data values
   for(i=0;i<n;i++)
    {
        if (i==0)
        printf("Enter the element matrix \n");
        for(j=0;j<m;j++)
        {
            printf("Enter a%d%d: ",i+1,j+1);
            scanf("%d",&array[i][j]);
            printf("\n");
        }
    }
    //print entered matrix
     printf("Entered Matrix:\n");
      for(i=0;i<n;i++)
    {
        
       
        for(j=0;j<m;j++)
        {
            printf("%d",array[i][j]);
            printf("\t");
           
        }
         printf("\n");
         printf("\n");
        
    }
   //create and print transpose Matrix
    printf("transpose of Matrix \n");
 

       for(i=0;i<m;i++)
    {
        
       
        for(j=0;j<n;j++)
        {
            printf("%d",array[j][i]);
            printf("\t");
           
        }
         printf("\n");
         printf("\n");
        
    }

    return 0;
}
