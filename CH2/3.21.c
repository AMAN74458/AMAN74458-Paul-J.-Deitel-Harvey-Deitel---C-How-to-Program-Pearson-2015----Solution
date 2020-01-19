/*

Write a program that demonstrates the difference between predecrementing and postdecrementing using the decrement operator --.

*/

// 3.20 (Predecrementing vs Postdecrementing) --> Solution
// by aman kumar

#include<stdio.h>
int main()
{
    int a = 5;
    printf("%d\n",a--);     // postdecrementing --> it will print value first then drecement happens  
    printf("%d\n",--a);     // predecrementing  --> in this first decrement will happen and then decremented value will be print
}