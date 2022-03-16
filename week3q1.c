/*Write a C function to find the kth occurrence of an odd integer in a sequence of non-negative integers, and then call your function from main. 

Your function should be according to the following declaration:

int find_odd(int k);

Input
You are given the input in two lines:

The first line contains a positive integer k. 
In the second line, you will be given a sequence of numbers. 

You have to find the kth occurrence of n in the sequence below. 

The second line consists of a sequence of non-negative integers,
terminated with a -1.  The -1 is not part of the sequence.

Output
If there are  k odd numbers in the sequence, then output the  kth
occurrence of odd in the sequence. Otherwise, output  -1.


Sample Input
2
1 1 3 2 3 4 1 -1

Sample Output
1
*/
#include<stdio.h>
int find_odd(int k)
{
    int sequence, count=0, rem;
        while(sequence != -1){
        
        scanf("%d", &sequence);
        if(sequence%2 != 0){
            count++;
            rem= sequence;
        }
        if(count == k){
            break;
        }
    }
    return rem;
}
int main(){

    int k, sequence = 0,rem, count=0;
    scanf("%d", &k);
    rem = find_odd(k);
    printf("%d", rem);
    return 0;
}