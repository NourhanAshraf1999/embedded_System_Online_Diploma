
#include <stdio.h>
#include<string.h>
struct employ
{
    char name[20];
    int id;
};
int main()
{
   
 struct employ e1={"Nourhan",123},e2={"Selim",321};
 struct employ *arr[]= {&e1,&e2};
 struct employ *((*a)[2])=&arr;
 printf("Employee name: %s \n",(**a)->name);
 printf("Employee ID:%d",(**a)->id);
 

    return 0;
}
