
#include <stdio.h>
//#include <string.h>


int main()
{
    char c[100];
    int i = 0, count = 0;
    printf("Enter a string: ");
    scanf("%s", c);
    while (c[i] != '/0')
    {
        count++;
        i++;

    }
    printf("Length of string:%d", count);

    return 0;
}
