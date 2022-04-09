#include<stdio.h>
int main(){
    int n ,max , secondmax, i = 0;
    printf("Enter the no. of elements ");
    scanf("%d",&n);
    int arr[n];
    for( i=0;i<n;i++){
        printf("Enter the elements ");
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    secondmax=arr[0];
    
    for( i =0;i<n;i++){
        
        if(arr[i]>max){
            secondmax=max;
            max=arr[i];} 
    }
     i=1;
    while(max==secondmax){
        max=arr[i];
        secondmax=arr[i];
        while(  i<=n){
            if(arr[i]>max ){
                secondmax=max;
                max=arr[i];
                i++;
            }
        }
    }
    printf("%d is the second largest number ",secondmax);
    return 0;
}
