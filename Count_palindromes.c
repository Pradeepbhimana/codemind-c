#include<stdio.h>
int co(int a){
    int s=0;
    while(a){
        s=s*10+a%10;
        a/=10;
    }
    return s;
    
}
int main(){
    int a;
    
    scanf("%d",&a);
    int b[a];
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int q=0;
    for (int i=0;i<a;i++){
        if(b[i]==co(b[i])){
            q+=1;
        }
    }
    printf("%d",q);
}