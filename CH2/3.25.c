/*

Write a program that utilizes looping to produce the following table of values:

*/

// 3.25.c (Tabular Output) --> Solution
// by aman kumar

#include<stdio.h>
int main()
{
    int A, counter = 1;
    puts("Enter the Numbers: ");
    while(counter <=5 )
    {
        scanf("%d",&A);
        printf("%d\t%d\t%d\t%d\n",A,A+2,A+4,A+6);
        counter++;
    }
}