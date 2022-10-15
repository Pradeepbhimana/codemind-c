#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c[a][b],s=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&c[i][j]);
            //sum1+=c[i][j];
        }
    }
    int sum1=0,sum;
    //if(a%2==0){
    for(int i=0;i<a;i++){
        sum=0;
        for(int j=0;j<b;j++){
            if(i==s){
                sum+=c[i][j];
            }
        
            //sum+=c[i][j];
                //printf("%d " ,c[i][j]);
            
        }
        s++;
        if(sum1<sum){
            sum1=sum;
            
        }
        
    }
    printf("%d",sum1);
    //}
    //printf("%d",sum1-sum);
}