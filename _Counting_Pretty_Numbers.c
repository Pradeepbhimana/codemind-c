#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d%d",&b,&c);
        int cou=0;
        for(int j=b;j<=c;j++){
            if(j%10==2 ||j%10==3||j%10==9){
                cou++;
            }
        }
        printf("%d
",cou);
    }
}