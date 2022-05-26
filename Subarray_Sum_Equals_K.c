#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c[a];
    for(int i=0;i<a;i++){
        scanf("%d",&c[i]);
    }
    int su,d=0;
    for(int i=0;i<a;i++){
        su=0;
        for(int j=i;j<a;j++){
            su+=c[j];
            if(su==b){
                d++;
                break;
            }
        }
    }
    printf("%d",d);
   
}
