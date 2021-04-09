

#include <stdio.h>

int main()
{
    float a,b,ans;
    char op;
    printf("Enter operator either + or - or * or / :  ");
    scanf("%c",&op);
    printf("Enter two oprends : ");
    scanf("%f",&a);
    scanf("%f",&b);
    switch(op)
    {
        case '+': 
        printf("%.1f + %.1f = %.1f",a,b,a+b);
        break;
        case '-': 
        printf("%.1f - %.1f = %.1f",a,b,a-b);
        break;
        case '/': 
        printf("%.1f / %.1f = %.1f",a,b,a/b);
        break;
        case '*': 
        printf("%.1f + %.1f = %.1f",a,b,a*b);
        break;
        default:
        printf("re-enter operator");
        break;
        
    }
    
    
    
    
}
