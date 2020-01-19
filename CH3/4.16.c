// 3.16 (Triangle-Printing Program) --> Solution
// by Aman Kumar

#include<stdio.h>
int main()
{
    int i, j;
    // for pattern A

    for (i = 1; i <= 10; ++i)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");

    // for pattern B

    for (i = 10; i>= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");   
    }

    printf("\n");

    //for pattern C

    int k, count = 1;
    for ( i = 10; i >= 1; i--)
    {
        for ( k = count; k >= 0 ; k--)
        {
            printf(" ");
        }
        for ( j = i; j >= 1; j--)
        {
            printf("*");
        }
        count = count + 1;
        printf("\n");
    }

    printf("\n");

    //  for pattern D

    for(i = 1; i <= 10; i++)
    {
        for(j = 10; j >= 1; j--)
        {
            printf(" ");
        }    
        for(k = 1; k <= i; k++)
        {
        printf("* ");
        }
        printf("\n");
    } 
}