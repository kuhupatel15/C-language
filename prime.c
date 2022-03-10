//Generate all the prime numbers between 1 and n, where n is a value supplied by the user.//
#include<stdio.h>
void main()
{
    int n ;
    printf("Enter tne range");

    scanf("%d",&n);
    printf("Prime numbers between 1 and %d are",n);
    for (int i=2;i<n-2;i++){
        if(i%2==0)
            {continue ;}
        
        
        for(int j=2;j<(i/2)-1;j++){
            if (i%j==0){
            break ;}
            
            
            
        }
        printf("%d ",i);
        
    }

    
}