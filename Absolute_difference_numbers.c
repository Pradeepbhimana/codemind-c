#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    c=pow(10,b);
    d=a%c;
    //printf("%d
",d);
    int q=a,w=0;
    while(q!=0){
        w++;
        q/=10;
    }
    int z=pow(10,w-b);
    printf("%d",abs(d-a/z));
    //printf("%d",a/z);
    
    
}