#include<stdio.h>
int main(){
    int a,b,c=0;
    scanf("%d",&a);
    for(int i=1;i<a;i++){
        b=0;
        b=i*i+1;
        if(b==a){
            c++;
            break;
        }
    }
    if(c>0){
        printf("NO");
    }
    else{
        printf("YES");
    }
}