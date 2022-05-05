#include<stdio.h>
int main(){
    
    int b[3];
    for(int i=0;i<3;i++){
        scanf("%d",&b[i]);
    }
    int c[3],a=0,bo=0;
    for(int i=0;i<3;i++){
        scanf("%d",&c[i]);
    }
    for(int i=0;i<3;i++){
        if(b[i]>c[i]){
            a++;
        }
        else if(b[i]==c[i]){
            continue;
        }
        else{
            bo++;
        }
    }
    printf("%d %d",a,bo);
    
}