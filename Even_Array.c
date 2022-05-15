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
        if(b[i]%2==0){
            k++;
        }
    }
    if(k==a){
        printf("True");
    }
    else{
        printf("False");
    }
    
}