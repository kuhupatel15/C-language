#include<stdio.h>
int main()
{
    int a , b , c ,gcd;
    printf("enter two numbers");
    scanf("%d""%d",&a,&b);
    if (b>=a)
    {
        c=a;
        a=b;
        b=c;

    }
    while(b>0)
    {
        gcd = a % b;
        a = b;
        b = gcd;
    }
    printf("%d", a);
    return 0;

}