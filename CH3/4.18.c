// 4.18 (Bar-Chart Printing Program) --> Solution
// by Aman Kumar

#include<stdio.h>
int main()
{
    int numbers;
    puts("Enter any five Numbers (each between 1 to 30): ");

    for (int i = 1; i <= 5; i++)
    {
        puts("Number");
        scanf("%d",&numbers);
        puts("Graph");
        for(int j=1; j <= numbers; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}