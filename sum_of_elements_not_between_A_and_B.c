#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int c,d;
    scanf("%d%d",&c,&d);
    int sum=0;
    for (int i=0;i<a;i++){
        if(c>d){
            if(b[i]>c || b[i]<d){
                sum+=b[i];
            }
        }
        if(c<d){
            if(b[i]<c || b[i]>d){
                sum+=b[i];
            }
        }
    }
    printf("%d",sum);
    
}