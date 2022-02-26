#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int c=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(i!=j){
                if(b[i]==b[j]){
                    printf("%d",b[i]);
                    c=1;
                    break;
                }
            }
        }
        if(c==1)
        {
            break;
        }
    }
}