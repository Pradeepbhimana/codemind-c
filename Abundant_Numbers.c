#include<stdio.h>
int main(){
    int a,c,b[c];
    int d=0;
    scanf("%d",&a);
    for (int i=1;i<a;i++){
        if(a%i==0){
            b[d]=i;
            d+=1;
        }    
    }
    int g=0;
    for(int i=0;i<a;i++){
        g=g+b[i];
        
    }
    if(a<g){
        printf("True");
    }
    else{
        printf("False");
    }
}