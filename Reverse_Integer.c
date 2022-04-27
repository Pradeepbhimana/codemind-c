#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=a,sum=0;
    while(b!=0){
        sum=sum*10+b%10;
        b=b/10;
    }
    printf("%d",sum);
}