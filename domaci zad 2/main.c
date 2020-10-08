#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[100],i,max=0;
    scanf("%d",&n);
    int *p=a;
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }




    for(i=0;i<n;i++)
    {
        if(*(p+i)>max)
        {
            max=*(p+i);
        }
    }
    printf("%d",max);
    return 0;
}
