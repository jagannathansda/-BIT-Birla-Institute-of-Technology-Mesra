/*

2. Write a program whether a given year is a leap year or not.

*/

#include <stdio.h>
int main()
{
    int year;
    printf("Enter a Year :");
    scanf("%d",&year);
    if (year%4==0 && year%100!=0)
    {
        printf("%d is a LEAP year",year);
    }
    else if(year%400==0)
    {
        printf("%d is a LEAP year",year);
    }
    else
    {
        printf("%d is not a LEAP Year",year);
    }
    return 0;
}