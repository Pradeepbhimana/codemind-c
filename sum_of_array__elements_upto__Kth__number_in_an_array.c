#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int k;
    scanf("%d",&k);
     
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=b[i];
    }
    printf("%d",sum);
}