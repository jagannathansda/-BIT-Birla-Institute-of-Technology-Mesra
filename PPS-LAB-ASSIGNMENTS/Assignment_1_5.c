/*

5. Write a program to find out whether number is even or odd.

   For example, 21 is odd, and 30 is an even number.
   Hint use % operator
   Num%2==0 (Even Number)
   Num%2!=0 (Odd Number)

*/

#include <stdio.h>
int main()
{
    int num1;
    printf("Enter a Number :");
    scanf("%d",&num1);
    if (num1%2==0)
    {
        printf("%d is an Even Number",num1);
    }
    else
    {
        printf("%d is an Odd Number",num1);
    }
    return 0;
}