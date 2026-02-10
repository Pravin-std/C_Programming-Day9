#include <stdio.h>
#include <string.h>

int main()
{
    char s[50];
    fgets(s, sizeof(s), stdin);

    int i;
    int len = strlen(s);
    int count = 0;
    for(i=0;i<len-1;i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] == ' ')) {
            continue;
        }else {
            count++;
        }
    }
    printf("%d", count);
}
