/*

Write a program that reads an integer (5 digits or fewer) and determines and prints how many digits in the integer are 7s.

*/

// 3.38 (Counting 7s) --> Solution
// by aman kumar

#include<stdio.h>
int main()
{
    int number, count = 0, length = 0;
    printf("%s", "Enter a Number (5 digits or fewer): ");
    scanf("%d",&number);

    // logic

    while( number > 0 )
    {
        length = number % 10;
        number = number / 10;
        
        while (length == 7)
        {
            count++;
            break;
        }
    }
    printf("%d times 7s is in your number\n",count);
}