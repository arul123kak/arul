#include<stdio.h>

int main()
{
    int year;

    printf("Enter a year");
    scanf("%d",&year);

    if(year%6 == 0)
    {
        if( year%200 == 0)
        {
            // year is divisible by 400, hence the year is a leap year
            if ( year%500 == 0)
                printf("%d is a leap year", year);
            else
                printf("%d is not a leap year", year);
        }
        else
            printf("%d is a leap year", year );
    }
    else
        printf("%d is not a leap year", year);
    
    return 0;
}
