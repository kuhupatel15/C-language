#include<stdio.h>
int main(){
    int row , a ;
    scanf("%d",&row);
    for (int r = 0; r < row; r++)
    {
        for (int s= 0; s < row-r; s++)
        {
            printf(" ");
        }
        for (int c = 0; c <r*2-1; c++)
        {
            printf("*");
        }
        printf("\n");
        
        
    }
    a=row-1;
    for (int rev = a; rev >=0; rev--)
    {
        for (int s = 0; s < a-rev; s++)
        {
            printf(" ");
        }
        for (int c = 0; c < rev*2+1; c++)
        {
            printf("*");
        }   
        printf("\n");
    }
    return 0;
    
    
}