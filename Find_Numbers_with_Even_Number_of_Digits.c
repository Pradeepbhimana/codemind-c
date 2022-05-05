#include<stdio.h>
int main(){
    
    int a,b,q=0;
    scanf("%d",&a);
    int c[a];
    for(int i=0;i<a;i++){
        b=0;
        scanf("%d",&c[i]);
        int d=c[i];
        while(d!=0){
            b++;
            d/=10;
        }
        if(b%2==0){
            q++;
        }
    }
    printf("%d",q);
    
    
    
    
}