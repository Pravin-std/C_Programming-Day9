#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];
    fgets(s, sizeof(s), stdin);
    
    char s1[50];
    strcpy(s1, s);

    if(s1==strrev(s))
    {
        printf("Palindrome");
    }else
    {
         printf("not Palindrome");
    }
}