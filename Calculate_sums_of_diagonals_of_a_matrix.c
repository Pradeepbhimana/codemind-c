#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int b[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            scanf("%d",&b[i][j]);
        }
        
    }
    int sum=0,su=0;
    for(int j=0;j<a;j++){
        
        for(int i=0;i<a;i++){
            if(i==j){
                sum+=b[i][j];
            }
            if(i+j==a-1){
                su+=b[i][j];
            }
            
           
        }
     //   printf("
");
    }
    printf("Principal Diagonal:%d
",sum);
    printf("Secondary Diagonal:%d",su);
    
}