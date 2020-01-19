// 2.19 (Arithmetic, Largest Value and smallest value) --> solution
// by aman kumar

#include<stdio.h>
int main()
{
    int a, b, c;
    puts("Enter any three number: ");
    scanf("%d %d %d",&a, &b, &c);
    int sum = 0;
    sum = (a + b + c);
    int average = 0;
    average = (a + b + c)/3;
    int product =0;
    product = (a * b * c);
    printf("%d %d %d\n",sum, average, product);

    // logic for largest value and smallest value

    if((a>b) && (a>c))
    {
        printf("%d is greater",a);
    }
    if ((b>a) && (b>c))
    {
        printf("%d is greater",b);
    }
    if((c>a) && (c>b)) 
    {
        printf("%d is greater",c);
    }
    if((a<b) && (a<c)) 
    {
        printf("%d is smaller",a);
    }
    if((b<a) && (b<c))
    {
        printf("%d is smaller",b);
    }
    if((c<a) && (c<b))
    {
        printf("%d is smaller",c);
    }
}