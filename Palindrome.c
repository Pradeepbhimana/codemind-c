#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=a;
    int c=0;
    while(b!=0){
        c=c*10+b%10;
        b=b/10;
    }
    
    if(a==c){
        printf("True");
    }
    else{
        printf("False");
    }
}