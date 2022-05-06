
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c=0,sum;
    scanf("%d",&a);
    b=a;
    while(b!=0){
        
        c=c*10+b%10;
        b/=10;
    }
    if(c==a){
        printf("True");
    }
    else{
        printf("False");
    }
    
        
}