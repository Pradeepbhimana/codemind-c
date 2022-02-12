#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=a;
    int q=a;
    int c=0;
    while(b!=0){
        c++;
        b=b/10;
    }
    int f[c];
    for(int i=0;i<c;i++){
        f[i]=a%10;
        a=a/10;
    }
    
    int g=0;
    int w=c;
    for(int i=0;i<c;i++){
        g=g+pow(f[i],w);
        w=w-1;
    }
    if(q==g){
        printf("True");
    }
    else{
        printf("False");
    }
}