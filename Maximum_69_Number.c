#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=a,c=0;
    while(b!=0){
        c+=1;
        b/=10;
    }
    int d[c];
    b=a;
    for(int i=0;i<c;i++){
        d[i]=b%10;
        b/=10;
    }
    for(int i=c-1;i>-1;i--){
        if(d[i]==6){
            d[i]=9;
            break;
        }
    }
    int sum=0;
    for (int i=c-1;i>=0;i--){
        if(d[i]==0){
            sum+sum*10+10;
        }
        else{
            sum=sum*10+d[i];
        }
        
    }
    printf("%d",sum);
    
}


