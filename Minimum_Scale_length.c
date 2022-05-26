#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int d,min=b[0];
    for(int i=0;i<a;i++){
        if(b[i]<min){
            min=b[i];
        }
    }
    for(int j=min;j>=1;j--){
        d=0;
        for(int i=0;i<a;i++){
            if(b[i]%j==0){
                d++;
            }
        }
        if(d==a){
            printf("%d",j);
            break;
        }
    }
}