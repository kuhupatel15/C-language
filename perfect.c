#include<stdio.h>
int main(){
    int num,div,rem,sum;
    sum=0;
    printf("Enter a number ");
    scanf("%d",&num);
    for (int i=2;i<num;i++){
        rem=num%i;
        
        while (rem==0){
            div=num/i;
            sum=sum+div;
            rem=1;
        }
    }
    if (sum+1==num){
               printf("%d is a perfect number",num);
            }
    else{
                printf("%d is not a perfect number",num);
            }
    return 0;
}