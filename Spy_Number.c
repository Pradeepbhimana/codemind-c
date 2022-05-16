
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=a,sum=0,su=1;
    while(b!=0)
    {
        sum+=b%10;
        b/=10;
    }
    int c=a;
    while(c!=0)
    {
        su*=c%10;
        c/=10;
    }
    if(su==sum){
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
}