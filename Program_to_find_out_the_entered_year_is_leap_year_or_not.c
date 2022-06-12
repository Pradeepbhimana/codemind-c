#include<stdio.h>
int main(){
    int a,c=0;
    scanf("%d",&a);
    if(a%400==0){
        printf("True");
        c=1;
    }
    else{
        if(a%100!=0){
            if(a%4==0){
                printf("True");
                c=1;
            }
        }
    
        
    }
        
    if(c==0){
        printf("False");
    }
}