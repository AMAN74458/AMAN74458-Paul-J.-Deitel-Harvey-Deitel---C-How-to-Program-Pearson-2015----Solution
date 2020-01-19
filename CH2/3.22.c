/*

Write a program that utilizes looping to print the num- bers from 1 to 10 side by side on the same line with three spaces between numbers.

*/

// 3.22 (Printing Numbers from a Loop) --> Solution
// by aman kumar

#include<stdio.h>
int main()
{
    int count = 1;
    while(count <= 10)
    {
        printf("%d   ",count);
        count++;
    }
}