#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];

    fgets(s, sizeof(s), stdin);

    int i = 0;
    int len = strlen(s);
    int res;
    for(i=0;i<len;i++)
    {
        if(s[i]==' ')
        {
            printf("%c",s[i]);
        }
        if(s[i] >= 97 || s[i] <= 122)
        {
            res = s[i] - 32;
        }
        printf("%c", res);
    }

}