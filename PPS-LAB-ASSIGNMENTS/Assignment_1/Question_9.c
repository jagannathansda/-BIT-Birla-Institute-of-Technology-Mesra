/*

9. Find the output of the following

*/
#include <stdio.h>
int main(void)
{
    char ch;
    for(ch='a';ch<='z';ch++)
    {
        printf("Char is %c, Ascii value is %d\n",ch,ch);
    }
    return 0;
}