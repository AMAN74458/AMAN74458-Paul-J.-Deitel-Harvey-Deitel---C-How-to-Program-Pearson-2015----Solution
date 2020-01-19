#include <stdio.h>
int main( void )
{
    unsigned int passes = 0;
    unsigned int failure = 0;
    unsigned int student = 1;
    int result;
    while( student <= 10)
    {
        printf("%s", "Enter result ( 1=pass,2=fail ): ");
        scanf("%d",&result);

        // modifaction

        while (1 > result || 2 < result)
        {
            printf("%s", "Enter result ( 1=pass,2=fail ): ");
            scanf("%d",&result);
        }

        // modification end

        if( result == 1)
        {
            passes = passes + 1;
        }
        else
        {
            failure = failure + 1;
        }

        student = student + 1;
    }
    printf("passed %u\n", passes);
    printf("failure %u\n", failure);

    if ( passes > 8)
    {
        puts("Bonus to instructor!");
    }
    return 0;
}