#include<stdio.h>
int rev(int a){
    int b=a;
    int c=0;
    if(b==0){
        return c;
    
    }
    else{
        while (b!=0){
             c=c*10+b%10;
             b=b/10;
        }
    }
    return c;
    
}
int pw(int a){
    int c=a*a;
    return c;
}
int main(){
    int a;
    scanf("%d",&a);
    
    if((pw(a))==rev(pw(rev(a)))){
        printf("True");
    }
    else{
        printf("False");
    }
    
}