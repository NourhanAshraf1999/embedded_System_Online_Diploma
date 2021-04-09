

#include <stdio.h>

int main()
{
    int a,b;
    printf("#########Console_output######\n");
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\n After swapping, value of a = %d\n" , a );
    printf("After swapping, value of b = %d\n" , b );
    printf("#############################\n");
    printf("########################################################################");
    return 0;
}
