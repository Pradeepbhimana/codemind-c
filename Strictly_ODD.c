#include<stdio.h>
int main(){
    
    int a;
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int k=0;
    for (int i=0;i<a;i++){
        if(i%2==0){
            if(b[i]%2!=0){
                k++;
            }
        }
    }
    if(k>0){
        printf("False");
    }
    else{
        printf("True");
    }
    
}