#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a],d=0;
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<a;i++){
        int c=0;
        for (int j=0;j<a;j++){
            if(b[i]==b[j]){
                c++;
            }
        }
        if(c==1){
            printf("%d ",b[i]);
            d=1;
        }
    }
    if(d==0){
        printf("-1");
    }
}