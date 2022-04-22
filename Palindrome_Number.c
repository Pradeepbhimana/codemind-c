#include<stdio.h>
int main(){
    int a,c,d;
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
        if(b[i]>0){
            if(b[i]>2){
                int q=b[i],e=0;
                while(q!=0){
                    e=e*10+q%10;
                    q/=10;
                    
                }
                if(e==b[i]){
                    printf("True
");
                }
                else{
                    printf("False
");
                }
            }
        }
    }
}