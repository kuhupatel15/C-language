#include<stdio.h>

int main()
{
    int a ,n ,b,c;
    printf("Enter a number ");
    scanf("%d",&n);
    
    for (int i = 1;i<=n;i++){
        c = i;
        b=0;
        while(c>0)
        {
            
            a=c%10;
            b=b+(a*a*a);
            c=c/10;
        }
        if (i==b)
        {
            printf("%d, ",i);
        
        }
    }
    return 0;
}