#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
   
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
        // printf("%d ",b[i]);
    }
    int d,e;
    scanf("%d%d",&d,&e);
     //printf(" c d %d %d",d,e);
    int min,q=0;
    
    for(int i=0;i<a;i++){
        if(b[i]<d || b[i]>e){
            if(q==0){
                min=b[i];
                q++;
                
            }
            else{
                if(min>b[i]){
                min=b[i];
                q++;
            }
            }
        
            
        }
        
    }
    if(q==0){
        printf("-1");
    }
    else{
        printf("%d",min);
    }
}