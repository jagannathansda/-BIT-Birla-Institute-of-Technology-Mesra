/*
2. Find the sum,multiplication,division and remainder of two numbers.
*/

#include <stdio.h>
int main()
{
    int num1,num2,sum,pro;
    float div,rem;
    printf("Enter First Number :");
    scanf("%d",&num1);
    printf("Enter Second Number :");
    scanf("%d",&num2);
    sum=num1+num2;
    pro=num1*num2;
    div=num1/num2;
    rem=num1%num2;
    printf("Sum of %d and %d : %d \n",num1,num2,sum);
    printf("Product of %d and %d : %d \n",num1,num2,pro);
    printf("Division of %d and %d : %f \n",num1,num2,div);
    printf("Remainder of %d and %d : %f \n",num1,num2,rem);
    return 0;
}