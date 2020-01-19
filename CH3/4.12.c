// 4.12 (Calculating the Sum of Even Integers) --> Solution
// by aman kumar

#include<stdio.h>
int main()
{
    int sum = 0;
    for( int i=2; i<=30; i++)
    {
        if(i%2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("Sum of Even Integers from 2 to 30 is %d\n",sum);
}