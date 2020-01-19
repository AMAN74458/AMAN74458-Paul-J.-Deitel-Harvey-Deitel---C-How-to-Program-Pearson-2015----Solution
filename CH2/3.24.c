/*

Write a program that uses looping to print the following table of values. Use the tab escape sequence, \t, in the printf statement
to separate the columns with tabs.

*/

// 3.24 (Tabular Output) --> Solution
// by aman kumar

#include<stdio.h>
int main()
{
    int N, count = 1;
    puts("Enter the number:\n");
    while( count <= 10)
    {
        scanf("%d",&N);
        printf("%d\t%d\t%d\t%d\n",N,10*N,100*N,1000*N);  // \t is used to give spaces between them
        count++;
    }
}