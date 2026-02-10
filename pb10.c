#include <stdio.h>
#include <string.h>

int main()
{
    char s[50];
    fgets(s, sizeof(s), stdin);

    int i;
    int len = strlen(s);
    int res;
    for(i=0;i<len-1;i++)
    {
        if (s[i]==32) {
            printf("%c", s[i]);
        }else {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                res = (s[i] + 32);
            }
            printf("%c",res);
        }

    }
}
