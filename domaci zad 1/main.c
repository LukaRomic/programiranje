#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,a[100][100],b[100][100];
    scanf("%d",&n);

    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
        }
        for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
    {
        b[i][j]=1;
    }
        }

        for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
    {
        b[i][j]=a[j][i];
    }
        }

        for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
    {
        printf("%d",b[i][j]);
    }
    printf("\n");
        }
    return 0;
}
