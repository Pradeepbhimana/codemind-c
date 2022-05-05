#include<stdio.h>
int main(){
    
    int a;
    scanf("%d",&a);
    int c[a],b[a],d[a];
    for(int i=0;i<a;i++){

        scanf("%d",&c[i]);
        
    }
    for(int i=0;i<a;i++){

        scanf("%d",&b[i]);
        
    }
    for(int i=0;i<a;i++){

        d[i]=b[i]+c[i];
        
    }
    for(int i=0;i<a;i++){

        printf("%d ",d[i]);
        
    }
    
    
    
}