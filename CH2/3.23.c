/*

The process of finding the largest number (i.e., the maximum of a group of numbers) is used frequently in computer applications. 
For example, a program that determines the winner of a sales contest would input the number of units sold by each salesperson. The
salesperson who sells the most units wins the contest. Write a pseudocode program and then a program that inputs a series of 10 non-negative
numbers and determines and prints the largest of the numbers.

counter:  A counter to count to 10 (i.e., to keep track of how many numbers have been input and to determine when all 10 numbers have been processed)
number:  The current number input to the program
largest:  The largest number found so far

*/

// 3.23 (Find the Largest Number) --> Solution
// by aman kumar

#include<stdio.h>
int main()
{
    int counter = 1, number = 0, largest;
    largest = number;  
    while(counter <= 10)
    {
        counter++;
        puts("Enters the Numbers:\n");
        scanf("%d",&number);

        //  logic for finding greatest number

        if(number > largest)
        {
            largest = number;
        }
    }
    printf("%d is largest number",largest);
}
