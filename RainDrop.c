#include<stdio.h>
int main(){
    int a,c=0;
    scanf("%d",&a);
    if(a%3==0){
        printf("Pling");
        c=1;
    }
    if(a%5==0){
        printf("Plang");
        c=1;
    }
    if(a%7==0){
        printf("Plong");
        c=1;
    }
    if(c==0){
        printf("%d",a);
    }
}