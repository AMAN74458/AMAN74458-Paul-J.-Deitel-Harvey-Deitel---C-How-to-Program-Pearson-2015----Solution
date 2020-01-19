/*

Write a program that reads in the side of a square and then prints that square out of asterisks. Your program should work for 
squares of all side sizes between 1 and 20. For example, if your program reads a size of 4, it should print

*/

// 3.32 (Square of Asterisks) --> Solution
// by aman kumar

#include<stdio.h>
int main()
{
    int square_size;
    printf("%s", "Enter Square Size (between 1 and 20 ): ");
    scanf("%d",&square_size);

    // logic

    int counter = 1;
    while( counter <= square_size )
    {
        puts("*");
        counter++;
    }
}