#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int pall(int a){
    int c=0,b=a;
    while(b!=0){
        c=c*10+b%10;
        b/=10;
    }
    if(a==c){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int a;
    scanf("%d",&a);
    int b=a+1;
    while(pall(b)!=1){
        b++;
    }
    int c=a-1;
    while(pall(c)!=1){
        c--;
    }
    int q,w;
    q=abs(a-b);
    w=abs(a-c);
    if(q>w){
        printf("%d
",c);
    }
    else if(q==w){
        printf("%d %d
",c,b);
    }
    else{
        printf("%d
",b);
    }
    
}