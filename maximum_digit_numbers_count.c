#include<stdio.h>
int co(int a){
    int s=0;
    if(a==0){
        return 1;
        
        
    }
    else{
        if(a<0){
            a=-a;
        }
        while(a!=0){
            s+=1;
            a/=10;
        }
        return s;
    }
    
}
int main(){
    int a;
    int b[a];
    scanf("%d",&a);
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int s=0;
    for(int i=0;i<a;i++){
       if(co(b[i])>s){
           s=co(b[i]);
       }
    }
    for (int i=0;i<a;i++){
        if(co(b[i])==s){
            printf("%d ",b[i]);
        }
    }
}