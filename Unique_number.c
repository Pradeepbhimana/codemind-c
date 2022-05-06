#include<stdio.h>
int main(){
    int a,c=0;
    scanf("%d",&a);
    int q=a;
    while(q!=0){
        c++;
        q/=10;
    }
    
    int s=c,w=a,b[c],e=0;
    while(w!=0){
        b[e]=w%10;
        e++;
        w/=10;
    }
    for(int i=0;i<c;i++){
        for(int j=i;j<c;j++){
            if(i!=j){
                if(b[i]==b[j]){
                    for(int k=j;k<a;k++){
                        b[k]=b[k+1];
                    }
                    c--;
                    j--;
                }
                
                
            }
        }
    }
    if(s==c){
        printf("Unique Number");
    }
    else{
        printf("Not Unique Number");
    }
}