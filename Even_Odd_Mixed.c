#include<stdio.h>
int main(){
    int a,c=0;
    scanf("%d",&a);
    int b=a;
    while(b!=0){
        c++;
        b/=10;
    }
    int d=a,e=0,o=0;
    while(d!=0){
        int q=d%10;
        if(q%2==0){
            e++;
        }
        else{
            o++;
        }
        d/=10;
    }
    if(e==c){
        printf("Even");
    }
    else if(o==c){
        printf("Odd");
    }
    else{
        printf("Mixed");
    }
    
}