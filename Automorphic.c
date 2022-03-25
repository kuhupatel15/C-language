//- Automorphic number 5 = 25 = 625 = 390625
#include<stdio.h>
#include<math.h>
int main()
{
   int num ,sq,rem,count=0;
   printf("Enter the number\n");
   scanf("%d",&num);
   sq=num*num; 
   int temp=num;
   while(temp>0){
      count ++;
      temp=temp/10;
   }
   
   int p=pow(10,count);
   rem= sq % p;
   if (rem==num)
      printf("Automorphic number");
   
   else
      printf("Not a automorphic number");
      return 0;
   


   
}