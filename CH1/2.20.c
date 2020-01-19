// 2.20 (Converting from seconds to hours, minutes and seconds) --> solution
// by aman kumar

#include<stdio.h>
int main()
{
    int seconds;
    puts("Enter total time elapsed, in seconds: ");
    scanf("%d",&seconds);
    
    // converts time to hours

    int hours;
    hours = seconds/3600;
    int minutes;
    minutes = seconds%3600;
    int seconds_1;
    seconds_1 = minutes%60;
    
    printf("%d : %d : %d",hours,minutes,seconds_1);
}