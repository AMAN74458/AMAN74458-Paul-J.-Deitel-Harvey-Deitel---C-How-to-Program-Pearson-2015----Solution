/*

Write a program that keeps printing the multiples of the integer 2, namely 2, 4, 8, 16, 32, 64, and so on. Your loop should not
terminate (i.e., you should create an infinite loop). What happens when you run this program?

*/

// 3.40 (Multiples of 3 with an Infinite Loop)  --> Solution
// by aman kumar

#include<stdio.h>
#include<math.h>
int main()
{
    int multiple_of_two, count = 1;
    while( count > 0)
    {
        multiple_of_two = 2 * count;
        printf("%d\n",multiple_of_two);
        count++;
    }
}