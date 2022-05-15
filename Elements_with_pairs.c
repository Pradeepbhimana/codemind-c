#include<stdio.h>
int main(){
    
    int a;
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
   /* printf("%d ",a);
    for(int i=0;i<a;i++){
        printf("%d ",b[i]);
    }*/
    int k;
    int q=0,sum=0;
    if(a%2!=0){
        for(int i=0;i<a;i++){
            if(i==a-1){
                printf("%d %d",b[i],sum);
            }
            else{
                printf("%d ",b[i]);
            }
        }    
        
    }
    else{
        for(int i=0;i<a;i++){
           printf("%d ",b[i]);
        }  
    }
    
    
    
    
        
    
    
    
}