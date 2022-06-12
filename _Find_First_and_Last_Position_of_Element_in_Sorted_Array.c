#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int s,m=0,c[1000];
    scanf("%d",&s);
    for (int i=0;i<a;i++){
        if(b[i]==s){
            printf("%d ",i);
            m=1;
            break;
            
        }
        
    }
    for (int i=a-1;i>=0;i--){
        if(b[i]==s){
            
            printf("%d ",i);
            m=1;
            break;
            
        }
        
    }
    if(m==0){
        printf("-1 -1");
    }
   
 
 
}