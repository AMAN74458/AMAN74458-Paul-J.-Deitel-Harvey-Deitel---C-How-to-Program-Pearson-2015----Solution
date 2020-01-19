// 4.17 (Calculating Credit Limit) --> Solution
// by Aman Kumar

#include<stdio.h>
int main()
{
    int account_number;
    float credit_limit, current_balance;
    for (int i = 1; i <= 3; i++)
    {
        printf("%s", "Enter the Customer's Account Number: ");
        scanf("%d", &account_number);
        printf("%s", "Enter Customer's Credit Limits: ");
        scanf("%f", &credit_limit);
        printf("%s", "Enter the Customer's Current Balance: ");
        scanf("%f", &current_balance);

        printf("The Customer's Account Number is: %d\n", account_number);
        printf("The Customer's new Credit Limits is: %f\n", credit_limit/2);
        if( current_balance > credit_limit )
        {
            puts("The Customer's Current Balance exceed their new credit limit");
        }
        else
        {
            printf("The Customer's Current Balance is: %f\n", current_balance);
        }
    }
    
}