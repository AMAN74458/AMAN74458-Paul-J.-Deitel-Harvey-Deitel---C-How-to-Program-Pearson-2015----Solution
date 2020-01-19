/*

The factorial of a nonnegative integer n is written n! (pronounced “n factorial”) and is defined as follows:
n!=n·(n-1)·(n-2)·...·1 (forvaluesofngreaterthanorequalto1) and
n!=1 (forn=0).

*/

// 3.45 (Factorial) --> Solution 
// by aman kumar

#include<stdio.h>
int main()
{
    int factorial;
    printf("%s", "Enter a non-negative integer to find its factorial: ");
    scanf("%d",&factorial);

    // logic

    int count = 0; 
    long long result = 1;
    if( factorial == 0)
    {
        printf("%lld is a Factorial of %d\n",result, factorial);
    }
    else
    {
        while( factorial != 0)
        {
            result = result * factorial;
            factorial--;
            count++;
        }
    printf("%lld is a Factorial of %d\n",result, count);
    }
}