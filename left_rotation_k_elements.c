#include<stdio.h>
int main(){
    int n,k;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the no. of times you want to rotate the array");
    scanf("%d",&k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {   printf("Enter the elements");
        scanf("%d",&arr[i]);
    }
    
    for (int i=0;i<k;i++){
        int temp=arr[0];
        for(int i=0;i<n;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;

    }
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
    
}