#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    double sum=0.0;
    for(double i=1;i<=a;i++){
        sum+=1/i;
    }
    printf("%0.2f",sum);
}