// 2.31 (Table of Squares and Cubes) --> solution
// by aman kumar

#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    puts("Enter any number ranging 0 to 10 to find squares and cubes: ");
    scanf("%d",&n);

    // logic for squares

    int a;
    a = pow(n,2);

    // logic for cubes

    int b;
    b = pow(n,3);

    printf("suquare of %d is %d\n",n, a);
    printf("cube of %d is %d\n",n, b);
}