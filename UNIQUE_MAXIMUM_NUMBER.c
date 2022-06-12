#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a],d=0,max=0;
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
            if(max<b[i]){
                max=b[i];
            }
            d=1;
        }
    }
    if(d==0){
        printf("-1");
    }
    else{
        printf("%d",max);
    }
}