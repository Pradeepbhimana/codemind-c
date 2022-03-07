#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int c,sum=0,sum1=0;
    scanf("%d",&c);
    for(int j=0;j<a;j++){
        if(b[j]<=c){
            sum+=1;
        }
        else{
            sum1+=2;
        }
    }
    printf("%d",sum+sum1);
}