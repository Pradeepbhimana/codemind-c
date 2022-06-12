#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int s,m=0,c[1000];
   // scanf("%d",&s);
    for (int i=0;i<a;i++){
        s=1;
        for(int j=0;j<a;j++){
            if(j!=i){
                s=s*b[j];
            }
        }
        printf("%d ",s);
        
    }
    
 
}