/*

4. Write a Program to take two numbers 'a' and 'b' as user input. find:

   i. a mod b
   ii. Square root of a and b
   iii. Power for example 10^2=100
   iv. log2(32),log10(100)
   v. abs value of -22
   vi. exp of 1

*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a,b,mod,root1,root2,pow1,pow2,logo1,logo2,logo3,logo4,absolute1,absolute2,exponent1,exponent2;
    printf("Enter First Number :");
    scanf("%d",&a);
    printf("Enter Second Number :");
    scanf("%d",&b);
    mod=a%b;
    root1=sqrt(a);
    root2=sqrt(b);
    pow1=pow(a,2);
    pow2=pow(b,2);
    logo1=log2(a);
    logo2=log2(b);
    logo3=log10(a);
    logo4=log10(b);
    absolute1=abs(a);
    absolute2=abs(b);
    exponent1=exp(a);
    exponent2=exp(b);
    printf("Mod of %d and %d : %d \n",a,b,mod);
    printf("Square Root of %d : %d \n",a,root1);
    printf("Square Root of %d : %d \n",b,root2);
    printf("%d Raised to the Power of 2 : %d \n",a,pow1);
    printf("%d Raised to the Power of 2 : %d \n",b,pow2);
    printf("Logarithmic value of %d with base 2 : %d \n",a,logo1);
    printf("Logarithmic value of %d with base 2 : %d \n",b,logo2);
    printf("Logarithmic value of %d with base 10 : %d \n",a,logo3);
    printf("Logarithmic value of %d with base 10 : %d \n",b,logo4);
    printf("Absolute Value of %d : %d \n",a,absolute1);
    printf("Absolute Value of %d : %d \n",b,absolute2);
    printf("Exponent of %d : %d \n",a,exponent1);
    printf("Exponent of %d : %d \n",b,exponent2);
    return 0;
}
