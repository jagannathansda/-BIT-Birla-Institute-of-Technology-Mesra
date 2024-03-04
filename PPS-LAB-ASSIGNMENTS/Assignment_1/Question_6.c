/*

6. Find out he largest among three numbers using a conditional operator.

*/

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter First Number :");
    scanf("%d",&a);
    printf("Enter Second Number :");
    scanf("%d",&b);
    printf("Enter Third Number :");
    scanf("%d",&c);
    if (a>b && a>c)
    {
        printf("%d is the largest number among %d and %d ",a,b,c);
    }
    else if (b>c && b>a)
    {
        printf("%d is the largest number among %d and %d ",b,a,c);
    }
    else
    {
        printf("%d is the largest number among %d and %d ",c,a,b);
    }
    return 0;
}