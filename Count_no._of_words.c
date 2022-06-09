#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    fgets(a,sizeof a,stdin);
    int c=0;
    for(int i=0;i<strlen(a);i++){
        if(a[i]==' '){
            c++;    
        }
        
    }
    printf("%d",c+1);
}