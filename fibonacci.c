#include<stdio.h>
int main(){
    int num,a, b,i ,sum=0;
    printf("Enter number of terms of fibonacci series \n");
    scanf("%d",&num);
    printf("Fibonacci series : \n");
    i=0;
    b=1  ;
    printf("0  ");
    while(i<=num){
        
         i++;
         a=b;
         b=sum;
         sum=b+a;  
         
         printf(" %d ",sum);
         
    }
    return 0; 
}
