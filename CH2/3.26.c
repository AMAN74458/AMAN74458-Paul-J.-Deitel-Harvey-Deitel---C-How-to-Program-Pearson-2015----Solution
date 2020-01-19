/*

 Using an approach similar to Exercise 3.23, find the two largest values of the 10 numbers. [Note: You may input each number only once.]

 */

// 3.26 (Find the Two Largest Numbers) --> Solution
// by aman kumar

#include<stdio.h>
int main()
{
    int counter = 1, largest, second_largest, number = 0;
    largest = number;
    second_largest = number;
    while( counter <= 10)
    {
        puts("Enter the number:");
        scanf("%d",&number);
        counter++;

        // logic

        if(number > largest)
        {
            second_largest = largest;
            largest = number;
        }
        else if(number > second_largest)
        {
            second_largest = number;
        }
    }
    printf("%d is largest number\n",largest);
    printf("%d is the second largest\n",second_largest);
}