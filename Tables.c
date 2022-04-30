#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>0){
        for(int i=1;i<b+1;i=i+2){
            printf("%d x %d = %d
",a,i,a*i);
        }
    }
    else{
        for(int i=1;i<b+1;i=i+2){
            printf("%d x %d = %d
",a,i,a*i);
        }
    }
        
    
}