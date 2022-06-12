#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int c=a/2;
    for(int i=0;i<c;i++){
        printf("%d %d ",b[i],b[i+c]);
    }
}