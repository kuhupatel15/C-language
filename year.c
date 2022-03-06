//4.	Print the given days in years-month-days format. E.g. 396 days = 1 year, 1 month, 1 day//
#include<stdio.h>
int main()
{
    int t ,n, years , month , days ;
    printf("Enter no. of days ");
    scanf("%d",&t);
    
    if (t>=365){
        if(t==366){
            printf("1 year 0 months 0 days");
        }
        else{
            n=t%365;
            printf("%d years\n",t/365);
            printf("%d months\n", n/30);
            days = n%30;
            printf("%d days",days);}
    }
    else if(t<365){
        printf("0 years\n");
        n=t%30;
        printf("%d months\n",t/30);
        printf("%d days",n);

    } 
    else{
        printf("0 years\n");
        printf("0 months\n");
        printf("%d days",t);
    }
    return 0;   
    
}
 

