#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a],e=0,o=0;
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<a;i++){
        if(b[i]%2==0){
            e++;
        }
        else{
            o++;
        }
    }
    printf("%d %d",e,o);
}