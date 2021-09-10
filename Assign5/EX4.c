

#include <stdio.h>
struct studentinfo
{
    char name[20];
    float marks;
    
};
int main()
{
   struct studentinfo s[10];
   int i;
   for (i=0;i<10;i++)
	{
		printf("for roll number %d\n",i+1);
		printf("Enter name:");
		scanf("%s",&s[i].name);
		printf("Enter mark:");
		scanf("%d",&s[i].marks);
	}
	printf("\nDisplaying information of students\r\n");
	for(i=0;i<10;i++)
	{
		printf("information for roll number %d\n",i+1);
		printf("Name: %s\n",s[i].name);
		printf("Mark: %d\n",s[i].marks); 
	}


   
   
   
    
   
   

    return 0;
}
