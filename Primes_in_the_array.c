#include<stdio.h>
int prime(int a){
    int k=0;
    if(a==1){
        return 0;
    }
    else{
        
        for(int i=2;i<a;i++){
            if(a%i==0){
                k++;
            
            }
        }
        if(k==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    
}
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    int sum=0,k=0;
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
        
    }
    
    
    
    /*if(l<m){
        int t=m;
        m=l;
        l=t;
      */
    
        
    for(int i=0;i<a;i++){
        
        if(prime(b[i])){
            sum+=b[i];
            k++;
        }
        
    }
    printf("%d",k);
    
    
}