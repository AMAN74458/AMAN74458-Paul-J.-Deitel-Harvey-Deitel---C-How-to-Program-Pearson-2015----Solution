// 2.32 (Body Mass Index Calculator) --> solution
// by aman kumar

#include<stdio.h>
#include<math.h>
int main()
{
    int weight_in_pounds, height_in_inches;
    printf("Enter weight in pounds and height in inches");
    scanf("%d %d",&weight_in_pounds, &height_in_inches);

    // logic for BMI

    int BMI;
    BMI = (weight_in_pounds * 703)/pow(height_in_inches,2);
    printf("Your BMI is %d\n\n",BMI);

    puts("BMI VALUES:\n");
    puts("Underweight: less than 18.5\n");
    puts("Normal: between 18.5 and 24.9\n");
    puts("Overweight: between 25 and 29.9\n");
    puts("Obese: 30 or greater");
}