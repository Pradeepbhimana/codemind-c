#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        if(i<10){
            printf("%d ",i);
        }
        else if(i%10!=0){
            int c=0,b=i;
            while(b!=0){
                int d=b%10;
                c+=i%d;
                b/=10;
            }
            if(c==0){
                printf("%d ",i);
            }
        }
    }
}