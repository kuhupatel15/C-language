#include<stdio.h>
int main()
{
    int a ,b ,c ;
    a = 1;
    scanf("%d",&a);
    b = 2 ;
    scanf("%d",&b);
    c = 3 ;
    scanf("%d",&c);
    if (a>b && b>c && a>c || a<b && b<c && a<c )
       { printf("1");}
    else
        {printf("0");}
    return 0;
}