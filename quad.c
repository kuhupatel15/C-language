//	Find the roots of a quadratic equation.//
#include<stdio.h>
#include<math.h>
int main(){
    float a,b , c , d , x ,y ;
    printf("Enter the a , b , c of quadratic equation");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if (d<0){
        printf("No real roots");
    } 
    else if(d==0){
        x=-b/2*a;
        printf("one real root%f",x);
    }
    else{
        x=(-b+sqrt(d))/2*a;
        
        y=(-b-sqrt(d))/2*a;
        printf("Roots are %f  %f",x,y);

    }
    return 0;
}