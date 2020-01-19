/*

Write a program that prints 100 asterisks, one at a time. After every tenth asterisk, your program should print a newline character. 
[Hint: Count from 1 to 100. Use the remainder operator to recognize each time the counter reaches a multiple of 10.]

*/

// 3.37 (Detecting Multiples of 10)  --> Solution
// by aman kumar

#include<stdio.h>
int main()
{
    int counter = 0;
    while( counter != 100)
    {
        counter++;
        printf("*");
        while( counter % 10 == 0 )
        {
            printf("\n");
            break;
        }
    }
}