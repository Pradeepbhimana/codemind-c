#include<stdio.h>
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
        f[i]=q%10;
        q=q/10;
    }
    int g=0;
    for(int i=0;i<c;i++){
        g=g+f[i];
    }
    if (a%g==0){
        printf("True");
    }
    else{
        printf("False");
    }
}