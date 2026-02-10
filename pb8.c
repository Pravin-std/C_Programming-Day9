#include <stdio.h>
#include <string.h>

int main()
{
    char s[50];
    fgets(s, sizeof(s), stdin);

    int count = 0, i;

    int len = strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i] == ' ')
        {
            count++;
        }
    }
    printf("%d", count);
}