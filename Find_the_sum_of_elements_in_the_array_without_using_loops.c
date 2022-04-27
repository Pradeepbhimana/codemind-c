#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int sum=0;
    int c=0;
    while(c!=a){
        sum+=b[c];
        c+=1;
    }
    printf("%d",sum);
    
    
}