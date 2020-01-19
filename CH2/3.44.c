/*

Write a program that reads three nonzero integers and deter- mines and prints whether they could be the sides of a right triangle.

*/

// 3.44 (Sides of a Right Triangle)  --> Solution
// by aman kumar

#include<stdio.h>
#include<math.h>
int main()
{
    puts("Enter any three values to Check that it will represent a Right Triangle or not (non-zero): ");
    
    // logic

    int counter = 1, sides = 0;
    int max1, max2, max3;
    max1 = sides;
    max2 = sides;
    max3 = sides;
    while( counter <= 3)
    {
        scanf("%d",&sides);
        counter++;

        // logic for finding greatest number means hypotenus, base and perpendicular

        if( sides > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = sides;
        }
        else if( sides > max2)
        {
            max3 = max2;
            max2 = sides;
        }
        else if( sides > max3)
        {
            max3 = sides;
        }
    }

    
    // hypotenus = pow(max1,2)
    // perpendicular = pow(max2,2)
    // base = pow(max3,2)
    
    if( (pow(max2,2) + pow(max3,2)) == pow(max1,2) )    // condition for Right Triangle
    {
        puts("It will represent a Right Angle Triangle");
    }
    else
    {
        puts("It will not represent a Right Angle Triangle");
    }
}