#include<stdio.h>
#include<string.h>
int main(){
    char a[200];
    fgets(a,sizeof a, stdin);
    int c=strlen(a),d,d1=0;
    for(int i=0;i<c;i++){
        d=0;
        for(int j=0;j<c;j++){
            if(i!=j){
                if(a[i]==a[j]){
                    d+=1;
                }
            }
            
        }
        if(d==0){
            printf("%d",i);
            d1+=1;
            break;
        }
        
    }
    if(d1==0){
        printf("-1");
    }
    
}