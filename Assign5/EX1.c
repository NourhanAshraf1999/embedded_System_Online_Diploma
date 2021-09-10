

#include <stdio.h>
struct studentinfo
{
    char name[20];
    int roll;
    float marks;
    
};
int main()
{
   struct studentinfo s1;
   printf("Enter information of students:\n");
   printf("Enter name:");
   scanf("%s",&(s1.name));
   printf("Enter roll number:");
   scanf("%d",&(s1.roll));
   printf("Enter marks:");
   scanf("%f",&(s1.marks));
   printf("Displaying information\n");
   printf("name :%s \n",(s1.name));
   printf("Roll :%d \n",(s1.roll));
   printf("Marks :%f \n",(s1.marks));
   
   
   
   
    
   
   

    return 0;
}
