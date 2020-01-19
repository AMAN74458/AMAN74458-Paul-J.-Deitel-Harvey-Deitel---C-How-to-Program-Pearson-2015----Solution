/* 

Develop a program that will determine the gross pay for each of several employees. The company pays “straight time” for the first 40 hours
worked by each employee and pays “time-and-a-half” for all hours worked in excess of 40 hours. You’re given a list of the employ- ees
of the company, the number of hours each employee worked last week and the hourly rate of each employee. Your program should input
this information for each employee and should deter- mine and display the employee's gross pay. Here is a sample input/output dialog:

*/

// 3.20 (Salary Calculator) --> solution
// by aman kumar

#include<stdio.h>
int main()
{
    int hours;
    while( hours != -1)
    {
         puts("Enter number of hours worked (-1 to end): ");
         scanf("%d",&hours);
         if(hours == -1)
         {
             break;
         }
         float hourly_rate;
         puts("Enter hourly rate of the worker($00.00): ");
         scanf("%f",&hourly_rate);

         // calculation

         float salary;
         if(hours <= 40)
         {
            salary = hours * hourly_rate;
            printf("Salary is %f\n",salary);
         }
         else
         {
            salary = hours * hourly_rate + (hourly_rate/2);
            printf("Salary is %f\n",salary);
         }
    }
}