#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int c=0;
    for(int i=1;i<a-1;i++){
        if(b[i]%2==0){
            if(b[i-1]%2!=0 && b[i+1]%2!=0 ){
                c++;
            }
        }
    }
    printf("%d",c);
    
}