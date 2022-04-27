#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a+10];
    int c=2;
    while(c!=a+10){
        b[0]=0;
        b[1]=1;
        b[c]=b[c-1]+b[c-2];
        c++;
    }
    for(int i=0;i<a+10;i++){
        if(b[i]>a){
            if(abs(b[i]-a)<abs(b[i-1]-a)){
                printf("%d",b[i]);
                break;
            }
            else if(abs(b[i]-a)==abs(b[i-1]-a)){
                printf("%d %d",b[i-1],b[i]);
                break;
            }
            else{
                printf("%d",b[i-1]);
                break;
            }
        }
    }
    
}