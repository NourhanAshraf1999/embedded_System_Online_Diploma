
#include <stdio.h>

int main()
{
    printf("The alphabets are:\n");
    char *p;
    char alph[26];
    int i;
    p=alph;
    for  (i=0;i<26;i++)
    {
        *p='A'+i;
        printf("%c ",*p);
        p++;
        
    }
   
     
   
    


    return 0;
}
