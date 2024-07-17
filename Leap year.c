// LEAP Year
#include <stdio.h>

int main()
{
    int year;
    printf("\nEnter the year: ");
    scanf("%d",&year);
    if (year%100==0)
    {
        if(year%400==0)
        printf("The year is a leap year!");
        else
        {
            printf("The year is not a leap year");
        }
    }
    else
    {
        if(year%4==0)
        {
            printf("The year is a leap year");
        }
        else
        {
            printf("The year is not a leap year ");
        }
    }
}
