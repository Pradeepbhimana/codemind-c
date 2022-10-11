#include<stdio.h>
int main()
{
    int n,m,max=1,sum=0,max1=0,sum1=0;
    scanf("%d%d",&n,&m);
    int arr1[n][m],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           scanf("%d",&arr1[i][j]);
        }
    }
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            sum1=sum1+arr1[i][j];
        }
        if(sum1>max1)
        {
            max1=sum1;
        }
        sum1=0;
    }
    printf("%d",max1);
    
}