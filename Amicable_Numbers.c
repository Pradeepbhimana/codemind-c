
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d2=0,d1=0;
    scanf("%d%d",&a,&b);
    
    for(int i=1;i<a;i++){
        if(a%i==0){
            d2+=i;
        }
        
    }
    //printf("%d
",d2);
    for(int i=1;i<b;i++){
        if(b%i==0){
            d1+=i;
        }
        
        
    }
   // printf("%d",d1);
    if(d1==a && d2==b){
        printf("Amicable");
    }
    else{
        printf("Not Amicable");
    }
}