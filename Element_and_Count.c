#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int q=a;
    int b[a],d[q];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
        d[i]=b[i];
    }
    int c;
    for(int i=0;i<a;i++){
        for(int j=i;j<a;j++){
            if(i!=j){
                if(b[i]==b[j]){
                    for(int k=j;k<a;k++){
                        b[k]=b[k+1];
                    }
                    a--;
                    j--;
                }
                
                
            }
        }
    }
    for(int i=0;i<a;i++){
        c=0;
        for(int j=0;j<q;j++){
            if(b[i]==d[j]){
                c++;
            }
        }
        printf("%d %d ",b[i],c);
    }
}