#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float s=(a+b+c)/2;
    float A=pow(s*(s-a)*(s-c)*(s-b),0.5);
    printf("%0.2f",A);
}