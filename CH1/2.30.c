// 2.30 (Separating digits in an Integer) --> solution
// by aman kumar

#include<stdio.h>
int main()
{
    unsigned int n, n1, a, b, c, d, e, f, g;
    puts("Enter one five-digit number: ");
    scanf("%d",&n);
    n1 = n/10000;
    a = n%10000;
    b = a/1000;
    c = a%1000;
    d = c/100;
    e = c%100;
    f = e/10;
    g = e%10;
    printf("%d %d %d %d %d\n",n1, b, d, f, g); 
}