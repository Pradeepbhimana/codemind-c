#include<stdio.h>
int main(){
    int a,c,d=0,e=0;
    scanf("%d",&a);
    int b[a];
    for(int i=1;i<a;i++){
        c=0;
        if(i>=2){
            for(int j=1;j<=i;j++){
            
                if(i%j==0){
                    c++;
                }
            }
        }
        if(c==2){
            b[d]=i;
            d+=1;
            //printf("%d b
",i);
            
        }
    }
    int q,w;
    for(int i=0;i<d;i++){
        for(int j=0;j<d;j++){
            if(b[i]*b[j]==a){
                e++;
                q=b[j];
                w=b[i];
                break;
            }
        }
    }
    if(e==0){
        printf("-1");
    }
    else{
        printf("%d %d",q,w);
    }
}