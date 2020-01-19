/*

How can you determine how fast your own computer really operates? Write a program with a while loop that counts from 1 to 1,000,000,000
by 1s. Every time the count reaches a multiple of 100,000,000, print that number on the screen. Use your watch to time how long each 
100 million iterations of the loop takes.

*/

// 3.36 (How Fast is Your Computer?) --> Solution
// by aman kumar

#include<stdio.h>
int main()
{
    long long counter = 0;
    while( counter != 1000000000)
    {
        int count = 0;
        while( count != 10 )
        {
            count++;
            if(counter == 100000000 * count )
            {
                printf("Multiple of 100 Million is : %lld\n",counter);
            }
        }
        counter++;
    }
}