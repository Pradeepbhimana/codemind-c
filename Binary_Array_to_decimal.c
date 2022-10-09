#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int s=0,d=0;
    for (int i=a-1;i>-1;i--){
        if(b[i]==1){
            s+=pow(2,d);
            
        }
        
        d+=1;
        //printf("%d",b[i]);
        
    }
    printf("%d",s);
    
}