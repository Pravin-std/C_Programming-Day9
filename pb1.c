#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];
    fgets(s,sizeof(s),stdin);

    printf("%d",strlen(s)-1);

    return 0;
}