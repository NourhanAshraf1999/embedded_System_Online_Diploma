

#include <stdio.h>
struct dis
{
   float inch;
   int feet;
};
int main()
{
   struct dis d1,d2,total;
   printf("Enter information for 1st distance:\n");
   printf("Enter feet:");
   scanf("%d",&(d1.feet));
   printf("Enter inch:");
   scanf("%f",&(d1.inch));
   printf("Enter information for 2nd distance:\n");
   printf("Enter feet:");
   scanf("%d",&(d2.feet));
   printf("Enter inch:");
   scanf("%f",&(d2.inch));
   total.inch=d1.inch+d2.inch;
   total.feet=d1.feet+d2.feet;
   while (total.inch >= 12.0) {
      total.inch = total.inch - 12.0;
      ++total.feet;
   }
   printf("Sum of ditances=%d\'-%.1f\"",total.feet,total.inch);
   
   
   
   
   
   
    
   
   

    return 0;
}
