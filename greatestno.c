#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter any three numbers\n");
    
    scanf("%d %d %d",&a,&b,&c);
    if (a!=b && b!=c && c!=a)
    {
    if (a>b && a>c)
    {
        printf("the greatest number is %d",a);
    }
    else if (b>c && b>a)
    {
        printf("the greatest number is %d",b);
    }
    else if (c>a && c>b)
    {
        printf("the greatest number is %d",c);
    }
    }
    else
    printf("Enter distinct number\n");
    return 0;
}