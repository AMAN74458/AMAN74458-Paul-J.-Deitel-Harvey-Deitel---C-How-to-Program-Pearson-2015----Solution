/*

Write a program that reads three nonzero integer values and determines and prints whether they could represent the sides of a triangle.

*/

// 3.43 (Sides of a Triangle)  --> Solution
// by aman kumar

#include<stdio.h>
#include<math.h>
int main()
{
    int side1, side2, side3;
    puts("Enter any three values to Check that it will represent a Triangle or not (non-zero): ");
    scanf("%d %d %d",&side1, &side2, &side3);

    // logic

    if( (side1 < (side2 + side3)) && (side2 < (side1 + side3)) && (side3 < (side1 + side2)))
    {
        printf("These three Sides will represent a Triangle\n");
    }
    else
    {
        printf("These three Sides will not represent a Triangle\n");
    }
}