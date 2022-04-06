#include<stdio.h>
int main(){
    int n ,great,p;
    scanf("%d",&n);
    int array[n];
    
    for (int i = 0; i < n; i++)
    {   printf("Enter the element");
        scanf("%d",&array[i]);
    }
    great=array[0];
    for (int i = 0; i < n; i++) 
    {
        
        if (great<array[i]){
            great=array[i];
            p=i; 
        }
    }
    printf("%d is the greatest no. found at index %d ",great,p);
    return 0;
    
    
}