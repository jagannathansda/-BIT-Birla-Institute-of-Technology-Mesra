/*

3. Modify to generat a list of leap years between two-year limits given by the user.

*/

#include <stdio.h>
int main()
{
    int year1,year2,i;
    printf("ENTER TWO YEAR BETWEEN WHICH ALL THE LEAP YEAR WILL BE LISTED \n");
    printf("Enter the FIRST Year : ");
    scanf("%d",&year1);
    printf("Enter the SECOND Year : ");
    scanf("%d",&year2);
    printf("LEAP Year between %d and %d \n",year1,year2);
    for(i=year1;i<=year2;i++)
    {
        if(i%4==0 && i%100!=0)
        {
            printf("  %d  \n",i);
        }
        else if(i%400==0)
        {
            printf("  %d  \n",i);
        }
        else
        {
            continue;
        }
    }
    return 0;
}
