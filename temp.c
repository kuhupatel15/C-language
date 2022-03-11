#include<stdio.h>
int main()
{
    float c , f , k ;
    scanf("%f",&c);
    f = 9*c/5+32;
    printf("In ferenhite %f\n",f);
    k = 273.15 + c;
    printf("in kelvin %f",k);
    return 0;
}