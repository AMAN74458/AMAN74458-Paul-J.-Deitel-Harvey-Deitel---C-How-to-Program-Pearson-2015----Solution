// 2.24 (Odd or Even) --> solution
// by aman kumar

#include<stdio.h>
int main()
{
    int n;     // declare a variable
    puts("Enter any one number: ");     // showing output
    scanf("%d",&n);     // taking input from users
    if(n%2 == 0)     // between () is logic for even or you can say condition
    {
        printf("%d is even\n",n);     // if condition is true shows output
    }
    if(n%2 != 0)     // between () is logic for odd or you can say condition
    {
        printf("%d is odd\n",n);     // if condition is true shows output
    }
}