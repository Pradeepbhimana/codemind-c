#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int sum=0;
    for(int i=0;i<a;i++){
        sum=sum*10+b[i];
    }
    int c[a+1];
    int d=sum+1;
    //printf("%d d
 ",d);
    sum=0;
    while(d!=0){
       c[sum]=d%10;
        d/=10;
        sum++;
    }
    for(int i=sum-1;i>=0;i--){
        printf("%d ",c[i]);
    }
    
    
}