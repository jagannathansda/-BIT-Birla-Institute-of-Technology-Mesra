/*

1. To check whether a given alphabet is vowel or not.

*/

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter an Alphabet :");
    scanf("%c",&ch);
    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
    {
        printf("%c is a Vowel",ch);
    }
    else
    {
        printf("%c is not a Vowel",ch);
    }
    return 0;
}