#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];
    fgets(s, sizeof(s), stdin);

    int i = 0;

    while(s[i] != '\0')
    {
        if(s[i]=='@')
        {
            break;
        }
        printf("%c",s[i]);
        i++;
    }
   
}