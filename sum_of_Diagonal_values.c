#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&c[i][j]);
        }
    }
    int sum=0;
    //if(a%2==0){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(i==j || i+j==a-1){
                sum+=c[i][j];
                //printf("%d " ,c[i][j]);
            }
        }
    }
    //}
    printf("%d",sum);
}