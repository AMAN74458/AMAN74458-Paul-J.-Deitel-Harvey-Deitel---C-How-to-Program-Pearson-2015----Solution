// 2.16 (arithmetic) ------>  solution
// by aman kumar

#include<stdio.h>
int main()
{
    int a, b, sum =0, product =0, difference =0, quotient =0, remainder =0;    // declaring variables
    puts("Enter any two numbers: ");
    scanf("%d %d",&a, &b); // taking input from users
    sum = a + b;           // performing addition
    product = a*b;         // performing multiplication
    difference = a - b;    // performing subtraction
    quotient = a/b;        // performing division to take quotient
    remainder = a%b;       // performing dividion to take remainder
    printf("%d %d %d %d %d\n",sum, product, difference, quotient, remainder);         // showing output
}