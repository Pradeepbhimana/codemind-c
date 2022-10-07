#include<stdio.h>
int co(int a){
    int s=0;
    if(a!=0){
        while(a!=0){
            s+=1;
            a/=10;
        }
        return s;
        
    }
    else{
        return 1;
    }
    
}
int main(){
    int a;
    int b[a];
    scanf("%d",&a);
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<a;i++){
        printf("%d ",co(b[i]));
    }
}