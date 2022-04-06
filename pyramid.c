#include<stdio.h>
int main(){
    int row;
    scanf("%d",&row);
    
    for(int r=0;r<row;r++){
        for(int c=1;c<=row-r;c++){
            printf("*");
        }
        
        for (int s =0;s<r*2+1;s++){
            printf(" ");
        }
    
        
        printf("\n");
        
    }
    return 0;
}