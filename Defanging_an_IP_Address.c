#include<stdio.h>
#include<string.h>
int main(){
    char a[200];
    fgets(a,sizeof a, stdin);
    int c=strlen(a),d,d1=0;
    for(int i=0;i<c;i++){
        if(a[i]=='.'){
            printf("[.]");
        }
        else{
            printf("%c",a[i]);
        }
        
        
    }
    
}