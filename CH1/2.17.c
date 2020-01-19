// 2.17 (final velocity) --> solution
// by aman kumar

#include<stdio.h>
int main()
{
    int u, a, t;     // u --> initial velocity, a --> acceleration, t --> time elapsed
    puts("Enter initial velocity, acceleration of an object and the time elapsed: ");     
    scanf("%d %d %d",&u, &a, &t);     //taking input from users
    float v, s;     // v --> final velocity, s --> distance travelled 
    v = u + (a*t);     // final velocity logic
    s = (u*t) + ((1/2)*(a*t*t));     // distance travelled logic
    printf("%f %f",v, s);     // shows output
}