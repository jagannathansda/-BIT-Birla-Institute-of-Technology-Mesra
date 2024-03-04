/*

8. Print the following using for loop
   
   10 20 30 40 50 60 70 80 90 100

*/

#include <stdio.h>
int main()
{
    int i;
    for(i=10;i<=100;i=i+10)
    {
        printf("%d ",i);
    }
    return 0;
}