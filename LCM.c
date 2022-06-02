#include<stdio.h>
int hc(int a,int b){
    int c;
    if(a>b){
        c=b;
        while(1){
            if(c%a==0 && c%b==0){
                return c;
            }
            else{
                c++;
            }
        }
    }
    else{
        c=a;
        while(1){
            if(c%a==0 && c%b==0){
                return c;
            }
            else{
                c++;
            }
        }
    }
    
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",hc(a,b));
}
