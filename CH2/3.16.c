// 3.16 (Sales Tax) --> solution
// aman kumar

#include<stdio.h>
int main()
{
    int miles, gallons;
    while( gallons != -1)
    {
    puts("Enter gallons used for each tankful (-1 to end): ");
    scanf("%d",&gallons);
    if( gallons == -1)
    {
        break;
    }
    puts("Enter the miles driven: ");
    scanf("%d",&miles);


    // calculation miles/gallons

    int miles_per_gallons = 0;
    miles_per_gallons = miles/gallons;
    printf("The miles per gallons for all tankfuls: %d",miles_per_gallons); 
    }
}