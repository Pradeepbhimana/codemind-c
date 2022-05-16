#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int c[a];
    for(int i=0;i<a;i++){
        scanf("%d",&c[i]);
        
    }
    /*int d[b];
    for(int i=0;i<b;i++){
        scanf("%d",&d[i]);
    }*/
    
    int q,s=0;
    for(int i=0;i<a;i+=2){
        if(c[i+1]==0){
            continue;
        }
        else{
            for(int j=0;j<c[i+1];j++){
                printf("%d ",c[i]);
            }
        }
    
    }
    /*for(int i=0;i<b;i++){
        q=0;
        for(int j=0;j<a;j++){
            if(d[i]==c[j]){
                q++;
            }
        }
        if(q==0){
            s++;
        }
    }
   printf("%d",s);*/
    
    
    
        
}