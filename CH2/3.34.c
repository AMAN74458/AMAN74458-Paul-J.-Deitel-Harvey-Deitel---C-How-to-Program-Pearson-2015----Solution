/*

A palindrome is a number or a text phrase that reads the same back- ward as forward. For example, each of the following five-digit integers is a palindrome: 12321, 55555, 45554 and 11611. Write a program that reads in a five-digit integer and determines whether or not it’s a palindrome. [Hint: Use the division and remainder operators to separate the number into its individual digits.]

*/

// 3.34 (Palindrome Tester) --> Solution
// by aman kumar

#include<stdio.h>
int main()
{
    int n;
    printf("%s", "Enter a number: ");
    scanf("%d",&n);

    // logic

    int n1, length, sum = 0;
    n1 = n;
    while(n>0)
    {
        length = n % 10;
        sum = (sum * 10) + length;
        n = n / 10; 
    }
    
    if( sum == n1)
    {
        puts("Palindrome");
    }
    else
    {
        puts("Not Palindrome");
    }
}