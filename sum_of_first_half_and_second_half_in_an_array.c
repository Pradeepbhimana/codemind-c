#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int sum=0,sum1=0;
    for(int i=0;i<a;i++){
        if(i<a/2){
            sum+=b[i];
            //printf("%d s1  ",b[i]);
        }
        else{
            sum1+=b[i];
            //printf("%d  s2 ",b[i]);
        }
    }
    printf("%d
",sum);
    printf("%d",sum1);
}