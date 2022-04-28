#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    long int b[a];
    for(int i=0;i<a;i++){
        scanf("%ld",&b[i]);
    }
    long int sum=0;
    
    for(int h=0;h<a;h++){
        sum+=b[h];
    }
    printf("%ld",sum);
}