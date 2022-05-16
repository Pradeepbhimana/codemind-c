#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int k=0,sum=0;
    while(b[k]%2!=0){
        sum+=b[k];
        k++;
        
    }
    printf("%d",sum);
}