#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    if(a%2==0){
        int q=a-1,c=0;
        while(c<a/2){
            printf("%d ",b[c]);
            printf("%d ",b[q]);
            q--;
            c++;
            
        }
    }
    else{
        int q=a-1,c=0,m=(a-1)/2,e=0;
        while(c<a/2){
            printf("%d ",b[c]);
            printf("%d ",b[q]);
            q--;
            c++;
        }
        printf("%d %d ",b[m],e);
    }
}