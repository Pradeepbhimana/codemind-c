#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a][a];
    int b[a][a];
    int max=0,sum=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            scanf("%d",&arr[i][j]);
            //sum+=arr[i][j];
        }
    }
    int c[a][a];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            scanf("%d",&b[i][j]);
            //sum+=arr[i][j];
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            c[i][j]=arr[i][j]+b[i][j];
            //sum+=arr[i][j];
        }
        
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(j<a-1){
                printf("%d ", c[i][j]);
            //sum+=arr[i][j];
            }
            else{
                printf("%d", c[i][j]);
            }
        }
        if(i<a-1){
            printf("
");
        }
        
    }
    
   /* int max=0,sum=0;
    for(int j=0;j<b;j++){
        for(int i=0;i<a;i++)
        {
            if(arr[i][j]%2==0){
                max+=arr[i][j];
            }
            else{
                sum+=arr[i][j];
            }
        }
        
    }
    printf("%d %d",max,sum);*/
    //printf("%d",sum);
}