// 4.14 (Factorials) --> Solution
// by aman kumar

#include<stdio.h>
int main()
{
    int count = 0, i=0;
    printf("%s%13s","Number","factorial\n");
    for( int i=1; i<=5; i++)
    {
        count = i;
        int factorial = 1;
        while (count != 1)
        {
            factorial = factorial * count;
            count--;
        }
        printf("%5d\t%9d\n",i, factorial);
    }
}