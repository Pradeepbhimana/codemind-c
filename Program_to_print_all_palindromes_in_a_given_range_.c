#include<stdio.h>
int pall(int a){
    int c=0;
    int r;
   
    while(a>0){
        r=a%10;
        c=(c*10)+r;
        a=a/10;
    }
    return c;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<b;i++){
        
        if(pall(i)==i){
            printf("%d ",i);
        }
    }
}