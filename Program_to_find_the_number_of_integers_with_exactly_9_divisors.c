#include<stdio.h>
int main(){
    int a,b,c=0;
    scanf("%d",&a);
    int sum=0;
    for (int i=2;i<=a;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
              sum+=1;  
            }
        }
        if(sum==9){
            printf("%d ",i);
            c+=1;
        }
        sum=0;
    }
    printf("
Total=%d",c);
}