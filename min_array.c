#include<stdio.h>
int main(){
    int n ,min;
    scanf("%d",&n);
    int array[n];
    
    for (int i = 0; i < n; i++)
    {   printf("Enter the element");
        scanf("%d",&array[i]);
    }
    min=array[0];
    for (int i = 0; i < n; i++)
    {
        
        if (min>array[i]){
            min=array[i]; 
        }
    }
    printf("%d is the smallest no.",min);
    return 0;
}