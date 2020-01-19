// 4.10 (Average  a Sequence of Integers) --> Solution
// by aman kumar

#include<stdio.h>
int main()
{
    int size;
    printf("%s", "Enter total number of integers you want to enter: "); 
    scanf("%d",&size);

    // logic

    int integer;
    float average = 0, sum = 0;
    for(int i=1; i<=size; i++)
    {
        printf("%s", "Enter a interger: ");
        scanf("%d",&integer);
        sum = sum + integer;
        average = sum/size;
    }
    printf("Average of integers is: %.2f\n",average);
}