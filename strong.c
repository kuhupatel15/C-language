/*- Accept a number and check if it is a strong number or not (Sum of factorial of each digit)
       Ex- 145 = 1! + 4! + 5! = 145*/
#include<stdio.h>
int main(){
    int num , fact,a,sum=0,b ;
    scanf("%d",&num);
    
    b=num;
    while (num!=0){
        int i =1;
        fact=1;
        a=num%10;
        while (i<=a){
            fact=fact*i;
            i++;
        }
        sum=sum+fact;
        num=num/10;
        
    }
    if (sum==b){
        printf("Strong number");
    }
    else{
        printf("Not a strong number");
    }
    
    
    return 0;

    
}