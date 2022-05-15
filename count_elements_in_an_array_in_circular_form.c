#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int k=0;
    for (int i=0;i<a;i++){
        if(i==0){
            if(b[a-1]%2==0 && b[i+1]%2!=0 || b[a-1]%2!=0 && b[i+1]%2==0 ){
                k++;
            }
        }
        else if(i==a-1){
            if(b[a-2]%2==0 && b[0]%2!=0 ||b[a-2]%2!=0 && b[0]%2==0 ){
                k++;
            }
            
        }
        else if(b[i-1]%2!=0 && b[i+1]%2==0 || b[i-1]%2==0 && b[i+1]%2!=0){
            k++;
        }
        
    }
    
        
    printf("%d",k);
    
    
}