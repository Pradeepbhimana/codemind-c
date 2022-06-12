#include<stdio.h>
int main(){
    int a,c;
    scanf("%d%d",&a,&c);
    int b[a];
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int d=c;
    for(int i=0;i<a;i++){
        if(d==a){
            d=0;
        }
        printf("%d ",b[d]);
        d++;
     
    }
}