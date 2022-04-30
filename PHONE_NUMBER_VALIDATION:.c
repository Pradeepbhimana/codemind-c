#include<stdio.h>
#include<math.h>
int main(){
    int a,c=0;
    scanf("%d",&a);
    //printf("%d
",a);
    int b=a;
    while(b!=0){
        c++;
        b=b/10;
    }
    int q=a;
    int d=0;
    while(q!=0){
        d=d*10+q%10;
        q=q/10;
    }
    //printf("%d
",d);
    if(c==10 ||c==9){
        if(d%10!=0){
            printf("Valid");
        }
        
    }
    else{
        printf("Invalid");
    }
    
}    