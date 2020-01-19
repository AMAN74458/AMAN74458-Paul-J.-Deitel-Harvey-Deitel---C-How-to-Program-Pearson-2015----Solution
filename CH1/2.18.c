// pseudocode --> for 2.18 (Comparing Values)
/* initialize or declare highest rainfall and current rainfall

   print to enter highest rainfall and current rainfall
   take input from the users
   then caompare the both the values
   if current rainfall exceed the highest rainfall
   print a message on the screen
   assign highest rainfall ever
*/

// 2.18 (Comparing Values) --> solution
// by aman kumar

#include<stdio.h>
int main()
{
    int highest_rainfall, current_rainfall;
    puts("Enter the Highest Rainfall ever in one season for a country, and the rainfall in the current year for that country: ");
    scanf("%d %d",&highest_rainfall, &current_rainfall);
    if(current_rainfall > highest_rainfall)
    {
        highest_rainfall = current_rainfall;
        printf("%d is the highest rainfall ever.",highest_rainfall);
    }
    return 0;
}