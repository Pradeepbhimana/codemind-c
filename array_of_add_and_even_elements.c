#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int c,d;
    scanf("%d%d",&c,&d);
    int k=0;
    for (int i=0;i<a;i++){
        if(b[i]%2!=0){
            printf("%d ",b[i]);
        }
        
    }
    for (int i=0;i<a;i++){
        if(b[i]%2==0){
            printf("%d ",b[i]);
        }
        
    }
    
    
}