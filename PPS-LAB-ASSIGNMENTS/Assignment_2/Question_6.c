/*

6. Proof the following using the C program

   a. sin^2(45 degree) + cos^2(45 degree) = 1
   b. sec^2(45 degree) + tan^2(45 degree) = 1
   c. cosec^2(45 degree) + cot^2(45 degree) = 1

*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    float sine,cosine,trigo1,trigo2,trigo3;
    sine=sin(45*(3.14/180));
    cosine=cos(45*(3.14/180));
    trigo1=pow(sine,2)+pow(cosine,2);
    trigo2=pow((1/cosine),2)-pow((sine/cosine),2);
    trigo3=pow((1/sine),2)-pow((cosine/sine),2);
    printf("sin^2(45 degree) + cos^2(45 degree) = %f \n",trigo1);
    printf("sec^2(45 degree) + tan^2(45 degree) = %f \n",trigo2);
    printf("cosec^2(45 degree) + cot^2(45 degree) = %f \n",trigo3);
    return 0;
}