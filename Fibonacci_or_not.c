#include<stdio.h>
int main(){
    int a,b,c[b] ;
    scanf("%d",&a);
    b=a;
    for (int i=2;i<1000;i++){
        c[0]=0;
        c[1]=1;
        c[i]=c[i-1]+c[i-2];
    }
    int f=0;
    
    for(int i=0;i<a*2;i++){
        
        if(a==c[i]){
            f++;
        }
        
    }
    if(f>0){
        printf("True");
        
    }
    else{
        printf("False");
    }
}