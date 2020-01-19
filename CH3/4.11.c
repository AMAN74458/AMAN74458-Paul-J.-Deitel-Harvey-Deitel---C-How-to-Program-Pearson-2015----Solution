// 4.11 (Find the Smallest) --> Solution
// by aman kumar

#include<stdio.h>
int main()
{
    int size;
    printf("%s", "Enter total number of integers you want to enter: ");
    scanf("%d",&size);

    // logic

    unsigned int smallest, integers;
    smallest = integers;
    for(int i=1; i<=size; i++)
    {
        printf("%s", "Enter a integers: ");
        scanf("%u",&integers);
        if( integers < smallest)
        {
            smallest = integers;
        }
    }
    printf("%u is Smallest Integers\n",smallest);
}