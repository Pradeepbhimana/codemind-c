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
    int a,s;
    
    scanf("%d %d",&a,&s);
    int b[a];
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int q=0;
    for (int i=0;i<a;i++){
        if(b[i]%s!=0){
            q+=1;
        }
    }
    printf("%d",q);
}