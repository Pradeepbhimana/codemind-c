#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=a,c=0;
    while(b!=0){
        c+=(b%10);
        b/=10;
    }
   
    while(c/10!=0){
        int d=c;
        c=0;
       
        while(d!=0){
            c+=(d%10);
            d/=10;
           
        }
    }

    printf("%d",c);
}