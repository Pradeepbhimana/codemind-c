#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a+10];
    int c=2;
    while(c!=a+10){
        b[0]=0;
        b[1]=1;
        b[c]=b[c-1]+b[c-2];
        c++;
    }
    for(int i=0;i<a;i++){
        printf("%d ",b[i]);
    }
}