// 2.23 (Largest and Smallest Integers) --> solution
// by aman kumar

#include<stdio.h>
int main()
{
    int a, b, c;
    puts("Enter any three numbers: ");
    scanf("%d %d %d",&a, &b, &c);
    if((a>b) && (a>c))
    {
        printf("%d is greater\n",a);
    }
    if((b>a) && (b>c))
    {
        printf("%d is greater\n",b);
    }
    if((c>a) && (c>b))
    {
        printf("%d is greater\n",c);
    }
    if((a<b) && (a<c))
    {
        printf("%d is smaller\n",a);
    }
    if((b<a) && (b<c))
    {
        printf("%d is smaller\n",b);
    }
    if((c<a) && (c<b))
    {
        printf("%d is smaller\n",c);
    }
}