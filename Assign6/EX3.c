
#include <stdio.h>
#include<string.h>

int main()
{
    char a[100];
    char *p;
    p=a;
    scanf("%s",a);
    int b=strlen(a);
    int i;
    
    for(i=0;i<b;i++)
    {
        *p=a[i];
        p++;
    }
    for(i=b-1;i>-1;i--)
    {
        printf("%c",*p);
        p--;
    }
    printf("%c",*p);
    
   
     
   
    


    return 0;
}
