#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];
    fgets(s,sizeof(s),stdin);

    printf("%s",strrev(s));

    return 0;
}