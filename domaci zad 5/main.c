#include <stdio.h>
#include <stdlib.h>

void provera(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(*(a+i)%3==0)
        {
            printf("%d",*(a+i));
        }
    }
}

int main()
{
    int a[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",a+i);
    }
    provera(a,n);
    return 0;
}
