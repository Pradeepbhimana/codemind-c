#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    fgets(a,sizeof a,stdin);
    int b=strlen(a);
    int vo=0,co=0,w=0,d=0;
    
    
    char * t = strtok(a, " ");
    while(t!=NULL){
        int q=int(strlen(t));
        for (int i=q-1;i>=0;i--){
            printf("%c",t[i]);
        }
        t = strtok(NULL, " ");
        printf(" ");
    }
    //printf("%d",int(strlen(t)));
    
    
}