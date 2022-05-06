
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c=0,sum;
    scanf("%d",&a);
    b=a;
    while(b!=0){
        if(b%10>c){
            c=b%10;
        }
        b/=10;
    }
    printf("%d",c);
    
        
}