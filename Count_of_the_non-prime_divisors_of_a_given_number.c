#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    int c=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            if(i>2){
                int b=0;
                for(int j=1;j<=i;j++){
                    if(i%j==0){
                        b++;
                       // printf("%d jj ",j);
                    }
                    
                }
                if(b>2){
                    //printf("%d tt ",i);
                    c++;
                }
            }
        }
    }
    printf("%d",c+1);
}