#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c[a][b],sum1=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&c[i][j]);
            sum1+=c[i][j];
        }
    }
    int sum=0;
    //if(a%2==0){
    for(int i=1;i<a-1;i++){
        for(int j=1;j<b-1;j++){
        
            sum+=c[i][j];
                //printf("%d " ,c[i][j]);
            
        }
    }
    //}
    printf("%d",sum1-sum);
}