#include<stdio.h>
#include<math.h>

int sq(int a){
    int b=sqrt(a);
    if(a==b*b){
        return 1;
    }
    else{
        return 0;
    }
    
}
int main(){
    int a;
    scanf("%d",&a);
    int b[a],sum=0;
    for(int i=0;i<a;i++){
       scanf("%d",&b[i]);
       if(sq(b[i])){
           sum+=b[i];
       }
    }
    printf("%d",sum);
    
   
    
    
    
}