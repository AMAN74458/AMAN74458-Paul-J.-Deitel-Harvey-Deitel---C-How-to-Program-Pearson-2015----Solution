/*

Write a program that reads the radius of a circle (as a float value) and computes and prints the diameter, the circumference and the area. Use the value 3.14159 for π.

*/

// 3.41 (Diameter, Circumference and Area of a Circle)  --> Solution
// by aman kumar

#include<stdio.h>
#include<math.h>
int main()
{
    float radius, diameter, circumference, area;
    printf("%s", " Enter the Radius: ");
    scanf("%f",&radius);

    // calculation of diameter

    diameter = 2 * radius;
    printf("%.2f is Diameter\n",diameter);

    // calculation of circumference

    circumference = 2 * 3.14159 * radius;
    printf("%.2f is Circumference\n",circumference);

    // calculation of area

    area = 3.14159 * pow(radius,2);
    printf("%.2f is Area\n",area);
}