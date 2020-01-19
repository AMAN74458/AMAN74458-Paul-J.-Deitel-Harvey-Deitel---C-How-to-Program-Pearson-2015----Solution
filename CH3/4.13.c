// 4.13 (Calculating the Product of Odd Integers) --> Solution
// by aman kumar

#include<stdio.h>
int main()
{
    unsigned int product = 1;
    for( int i=1; i<=15; i++)
    {
        if(i%2 != 0)
        {
            product = product * i;
        }
    }
    printf("Product of Odd Integers from 1 to 15 is %u\n",product);
}