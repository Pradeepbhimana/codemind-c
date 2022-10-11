#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int m[a][b];
    
    for(int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            scanf("%d",&m[i][j]);
        }
    }
    int su=0;
    for(int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            if(i==0 or j==a-1 or j==0 or i==a-1){
                su+=m[i][j];
            }
        }
    }
    printf("%d",su);
    
}