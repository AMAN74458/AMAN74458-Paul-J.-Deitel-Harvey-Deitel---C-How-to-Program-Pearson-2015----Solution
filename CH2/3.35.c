/*

Input an integer (5 digits or fewer) containing only 0s and 1s (i.e., a “binary” integer) and print its decimal equivalent. [Hint:
Use the re- mainder and division operators to pick off the “binary” number’s digits one at a time from right to left. Just as in the
decimal number system, in which the rightmost digit has a positional value of 1, and the next digit left has a positional value of 
10, then 100, then 1000, and so on, in the binary number sys- tem the rightmost digit has a positional value of 1, the next digit 
left has a positional value of 2, then 4,then8,andsoon.Thusthedecimalnumber234canbeinterpretedas4*1+3*10+ 2*100. The decimal equivalent 
of binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4 + 8 or 13.]

*/

// 3.35 (printing the Decimal Equiavalent of a Binary Number) --> Solution
// by aman kumar

#include<stdio.h>
#include<math.h>
int main()
{
    int binary_number;
    printf("%s", "Enter a Binary Number ( 5 digit or fewer): ");
    scanf("%d",&binary_number);

    // logic

    int digit, decimal_number = 0, count = 0;
    while( binary_number > 0 )
    {
        digit = binary_number % 10;
        decimal_number = decimal_number + pow(2,count++) * digit;
        binary_number = binary_number / 10;
    }
    printf("Decimal Number is %d\n",decimal_number);
}