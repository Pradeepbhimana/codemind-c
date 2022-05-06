#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d=0;
    scanf("%d",&a);
    c=a;
    while(c!=0){
        d++;
        c/=10;
    }
    b=a*a;
    //printf("%d
",b);
    int q=(pow(10,d));
    //printf("%d
",q);
    //printf("%d",b%q);
    if(a==b%q){
        printf("Automorphic Number");
    }
    else{
        printf("Not an Automorphic Number");
    }
}