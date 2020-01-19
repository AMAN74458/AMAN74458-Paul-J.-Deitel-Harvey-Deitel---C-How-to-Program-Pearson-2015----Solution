/* 

question: One large chemical company pays its salespeople on a com- mission basis. The salespeople receive $200 per week plus 9% 
of their gross sales for that week. For example, a salesperson who sells $5000 worth of chemicals in a week receives $200 plus 9%
of $5000, or a total of $650. Develop a program that will input each salesperson’s gross sales for last week and will calculate 
and display that salesperson’s earnings. Process one salesperson's figures at a time. Here is a sample input/output dialog:

*/

// 3.18 (Sales-Commision Calculator) --> solution
// by aman kumar

#include<stdio.h>
int main()
{
    float dollars;
    while( dollars != -1)
    {
        puts("Enter sales in dollars (-1 to end ): ");
        scanf("%f",&dollars);
        if(dollars == -1)
        {
            break;
        }
        
        // calculation

        float salary;
        salary = (200 + (dollars*0.09));
        printf("Salary is: %f\n",salary);
    }
}