/*
4. Store the three different type values using scanf() function and print

   For example 10 , 40.50 , 'A'
   
 */

#include <stdio.h>
int main()
{
    int a;
    float b;
    char ch;
    printf("Enter a Character :");
    scanf("%c",&ch);
    printf("Enter a Number :");
    scanf("%d",&a);
    printf("Enter a Real Number :");
    scanf("%f",&b);
    printf(" %d , %f , %c ",a,b,ch);
    return 0;
}