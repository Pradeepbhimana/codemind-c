#include<stdio.h>
int pp(int a){
    int c=0;
    int b=a;
    while (b!=0){
        c=c*10+b%10;
        b=b/10;
    }
    return c;
}
int main(){
    int a,b,c;
    scanf("%d",&a);
    while (a>0){
        a+=pp(a);
        if(a==pp(a)){
            printf("%d",a);
            break;
        }
        else{
            continue;
        }
    }
    
}