#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a],c[a/2];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    for(int i=a-1;i>=a/2;i--){
        printf("%d ",b[i]);
    }
    int q=0;
    for(int j=0;j<a/2;j++){
        c[q]=b[j];
        q++;
        printf("%d ",b[j]);
    }
}