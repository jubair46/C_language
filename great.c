#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter three numbers =");
    scanf("%d,%d,%d",&a,&b,&c);

    if((a==b && a>c) || (a==c && a>b))
    {
        printf("same inputs given");
    }
    else if(a>b && a>c)
    {
        printf("%d",a);
    }
    else if(b>a && b>c)
    {
        printf("%d",b);
    }
    else if(c>a && c>b)
    {
        printf("%d",c);
    }
    else
    {
        printf("all inputss are same");
    }
    return 0;
}