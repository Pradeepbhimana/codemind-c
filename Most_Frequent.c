#include<stdio.h>
int main(){
    int a,c;
    scanf("%d",&a);
    int b[a];
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int d=0,q;
    for(int i=0;i<a;i++){
        c=0;
        for(int j=0;j<a;j++){
            if(b[i]==b[j]){
                c++;
                
            }
        }
        if(c>d){
            d=c;
            q=b[i];
        }
        else if(c==d){
            if(q>b[i]){
                q=b[i];
            }
        }
    }
    printf("%d",q);
}