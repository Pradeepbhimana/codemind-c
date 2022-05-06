
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c=0;
    scanf("%d",&a);
    b=a;
    while(b!=0){
        c=c*10+b%10;
        b/=10;
    }
    printf("%d",c);
}