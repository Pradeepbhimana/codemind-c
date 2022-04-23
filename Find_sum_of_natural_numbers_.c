#include<stdio.h>
int main(){
    int a,c=0;
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        c+=i;
    }
    printf("%d",c);
}