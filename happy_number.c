#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=a,c=0;
    while(b!=0){
        c+=pow(b%10,2);
        b/=10;
    }
   
    while(c/10!=0){
        int d=c;
        c=0;
       
        while(d!=0){
            c+=pow(d%10,2);
            d/=10;
           
        }
    }

    if(c==7 || c==1){
        printf("True");
    }
    else{
        printf("False");
        //printf("%d",c);
    }
}