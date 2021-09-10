

#include <stdio.h>
struct complex
{
   float real;
   float imj;
};
void add(struct complex a,struct complex b)
{
    struct complex ans;
    ans.real=a.real+b.real;
    ans.imj=a.imj+b.imj;
    printf("Sum=%.1f+%.1fi",ans.real,ans.imj);
}
int main()
{
   struct complex c1,c2;
   printf("For 1st complex number\nEnter real and imaginary recpectivley: ");
   scanf("%f",&c1.real);
   scanf("%f",&c1.imj);
   printf("For 2nd complex number\nEnter real and imaginary recpectivley: ");
   scanf("%f",&c2.real);
   scanf("%f",&c2.imj);
   add(c1,c2);
    return 0;
}
