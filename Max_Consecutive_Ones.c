#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int s=0,l=0,c[1000];
    for (int i=0;i<a;i++){
        if(b[i]==0){
            c[l]=s;
            s=0;
            l+=1;
        }
        else if(i==a-1){
            c[l]=s+1;
            s=0;
            l++;
        }
        else{
            s+=b[i];
        }
    }
    int max=0;
    for(int i=0;i<l;i++){
        if(c[i]>max){
            max=c[i];
        }
        //printf("%d ",c[i]);
    }
    printf("%d",max);
}