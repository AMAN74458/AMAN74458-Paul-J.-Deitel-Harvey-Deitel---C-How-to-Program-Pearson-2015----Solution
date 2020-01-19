// error code running but not working in a proper way, unable to find error 
// 2.26 (Multiples) --> solution
// by aman kumar

#include<stdio.h>
int main()
{
    int n1, n2;     // declare two variables
    puts("Enter any two integers: ");     // showing output 
    scanf("%d %d\n",&n1, &n2);     // taking input from users
    
    if(((n2)%(n1)) == 0)
    {
        printf("%d is multiple of %d",n1, n2);
    }
}