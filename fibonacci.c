#include<stdio.h>
int main(){
    int a,b,c[b] ;
    scanf("%d",&a);
    b=a;
    for (int i=2;i<a*2;i++){
        c[0]=0;
        c[1]=1;
        c[i]=c[i-1]+c[i-2];
    }
   
    for(int i=0;i<a;i++){
        printf("%d ",c[i]);
        
    }
}