#include<stdio.h>
int main()
{
    int count=0,sum1=0,n,m,sum=0;
    scanf("%d%d",&n,&m);
    int arr[n][m],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]<arr[i][j+1] && j!=m-1)
            {
                sum++;
            }
            else if(arr[i][j+1]<arr[i][j] && j!=m-1)
            {
                sum1++;
            }
        }
        if(sum==m-1 || sum1==m-1)
        {
            count++;
        }
        sum=0;
        sum1=0;
    }
    printf("%d",count);
}