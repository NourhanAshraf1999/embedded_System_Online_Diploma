
#include <stdio.h>

int main()
{
    int m=29;
    printf("Adress of m : %p \n",&m);
    printf("Value of m : %d \n",m);
    int* ab;
    ab=&m;
    printf("Now ab is assigned with adress of m. \n");
    printf("Adress of pointer ab : %p \n",ab);
    printf("content of pointer ab : %d \n",*ab);
    m=34;
    printf("The value of m is assigned to 34 now \n");
    printf("Adress of pointer ab : %p \n",ab);
    printf("content of pointer ab : %d \n",*ab);
    *ab=7;
    printf("Adress of m : %p \n",&m);
    printf("Value of m : %d \n",m);
    
    


    return 0;
}
