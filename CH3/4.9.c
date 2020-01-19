// 4.9 (Sum of Sequence of Integers) --> Solution
// by aman kumar

#include<stdio.h>
int main()
{
    int size;
    printf("%s", "Enter total number of integers you want to add: ");     // number of integers you want to add
    scanf("%d",&size);    // take input from users

    // logic

    int integers, sum = 0;
    for( int i=1;i<=size;i++)
    {
        printf("%s", "Enter integer: ");
        scanf("%d",&integers);
        sum = sum + integers;
    }
    printf("Sum of integers is: %d\n",sum);
}