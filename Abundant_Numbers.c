
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c=0,sum;
    scanf("%d",&a);
    for(int i=1;i<a;i++){
        if(a%i==0){
            c+=i;
        }
    }
    if(c>a){
        printf("True");
    }
    else{
        printf("False");
    }
    
        
}