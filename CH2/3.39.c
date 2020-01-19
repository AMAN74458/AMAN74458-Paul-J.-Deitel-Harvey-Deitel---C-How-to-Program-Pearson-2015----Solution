/*

Write a program that displays the following checker- board pattern:

*/

// 3.39 (Checkboard Pattern of Asterisk)  --> Solution
// by aman kumar

#include<stdio.h>
int main()
{
    int count = 1;
    while( count <= 5 )    // for row
    {
        printf("%s", "* ");
        count++;
       
        int counter = 1;
        while( counter <= 5 )    // for coulumn
        {
            printf("%s", "* ");
            counter++;
        }
        
        puts("");    // output a new line
        
        if( count % 2 == 0)    // condition for even
        {
            printf("%s", " ");    // gives spaces
        }
    }
}