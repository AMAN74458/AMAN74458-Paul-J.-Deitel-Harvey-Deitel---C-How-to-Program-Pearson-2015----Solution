// 3.17 (Credit-Limit Calculator) --> solution
// by aman kumar

#include<stdio.h>
int main()
{
    int account_number;
    while( account_number != -1)
    {
    puts("Enter Account Number ( -1 to end ): ");
    scanf("%d",&account_number);
    if(account_number == -1)
    {
        break;
    }
   
    double beginning_balance;
    puts("Enter Beginning Balance: ");
    scanf("%lf",&beginning_balance);
   
    double charges;
    puts("Enter total Charges: ");
    scanf("%lf",&charges);
   
    double credits;
    puts("Enter Credits: ");
    scanf("%lf",&credits);
   
    double credit_limit;
    puts("Enter Credit limit: ");
    scanf("%lf",&credit_limit);

    printf("Account: %d\n",account_number);
    printf("Credit Limit: %lf\n",credit_limit);

    // calculation

    double balance = 0;
    balance = beginning_balance + credits;
    printf("Balance: %lf\n",balance);

    if(balance > credit_limit)
    {
        puts("Credit is Exceeded");
    }
    }
}