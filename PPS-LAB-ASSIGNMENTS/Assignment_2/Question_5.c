/*

5. Write a program to take marks in subject as user input and find the percentage and grade of the student. Use the following grading rule.

   i. Below 25 - F
   ii. 25 to 45 - E
   iii. 45 to 50 - D
   iv. 50 to 60 - C
   v. 60 to 80 - B
   vi. Above 80 -A

*/

#include <stdio.h>
int main()
{
    int num1,num2,num3,num4,num5;
    float precentage;
    char grade;
    printf("Enter Marks Obtained in English :");
    scanf("%d",&num1);
    printf("Enter Marks Obtained in Mathematics :");
    scanf("%d",&num2);
    printf("Enter Marks Obtained in Physics :");
    scanf("%d",&num3);
    printf("Enter Marks Obtained in Chemistry :");
    scanf("%d",&num4);
    printf("Enter Marks Obtained in Biology :");
    scanf("%d",&num5);
    precentage=(num1+num2+num3+num4+num5)/5;
    if (precentage>80)
    {
        grade='A';
    }
    else if (precentage<=80 && precentage>60)
    {
        grade='B';
    }
    else if (precentage<=60 && precentage>50)
    {
        grade='C';
    }
    else if (precentage<=50 && precentage>45)
    {
        grade='D';
    }
    else if (precentage<=45 && precentage>25)
    {
        grade='E';
    }
    else
    {
        grade='F';
    }
    printf("ENGLISH MARKS : %d \n",num1);
    printf("MATHEMATICS MARKS : %d \n",num2);
    printf("PHYSICS MARKS : %d \n",num3);
    printf("CHEMISTRY MARKS : %d \n",num4);
    printf("BIOLOGY MARKS : %d \n",num5);
    printf("PRECENTAGE OBTAINED BY STUDENT : %f \n",precentage);
    printf("GRADE OBTAINED BY STUDENT : %c \n",grade);
    return 0;
}