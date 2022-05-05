#include<stdio.h>
int main(){
    
    int a,b;
    scanf("%d%d",&a,&b);
    int c[a][b],sum=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&c[i][j]);
            sum+=c[i][j];
        }
    }
    printf("%d",sum);
}