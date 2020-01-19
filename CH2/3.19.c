/* 

question: The simple interest on a loan is calculated by the formula interest = principal * rate * days / 365;
The preceding formula assumes that rate is the annual interest rate, and therefore includes the division by 365 (days).
Develop a program that will input principal, rate and days for several loans, and will calculate and display the simple
interest for each loan, using the preceding formula. Here is a sample input/output dialog:

*/

// 3.19 (Interest Calculator)  --> solution
// by aman kumar

#include<stdio.h>
int main()
{
    float loan_principal;
    while( loan_principal != -1)
    {
        puts("Enter loan Principal ( -1 to end ): ");
        scanf("%f",&loan_principal);
        if(loan_principal == -1)
        {
            break;
        }

        float interest_rate;
        puts("Enter interest rate: ");
        scanf("%f",&interest_rate);

        int loan_days;
        puts("Enter term of the loan in days: ");
        scanf("%d",&loan_days);

        // calculation

        float interest_charge;
        interest_charge = (loan_principal * interest_rate * loan_days/365);
        printf("The interest charge is: %f",interest_charge);
    }
}