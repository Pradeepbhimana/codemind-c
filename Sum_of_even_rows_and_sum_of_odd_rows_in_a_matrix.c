#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int c[a][b];
    int e=0,o=0;
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            scanf("%d",&c[i][j]);
        }
    }
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            if(i%2==0){
                e+=c[i][j];
            }
            else{
                o+=c[i][j];
            }
     
        }
    }
    printf("%d %d",e,o);
}