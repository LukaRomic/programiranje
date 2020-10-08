#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int provera(char c, char *s)
{
    int i,n=0;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==c)
        {
            n++;
        }
    }
    return n;
}

int main()
{
    int n;
    char c,s[100];
    gets(s);
    scanf("%c",&c);
    n=provera(c,s);
    printf("%d",n);
    return 0;
}
