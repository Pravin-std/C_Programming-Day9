#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];
    fgets(s,sizeof(s),stdin);

    int i=0;
    int valid = 0;
    while(s[i] != '\0')
    {
        if(s[i] >= 'A' && s[i] < 'Z')
        {
            valid = 1;
        }
        i++;
    }
    if(valid)
    {
        printf("Valid");
    }else
    {
        printf("Invalid");
    }
}