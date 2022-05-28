#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int c=0,f=0;
    fgets(a,sizeof a,stdin);
    for(int i=0;i<=strlen(a);i++){
        if(a[i]=='a'|| a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O'|| a[i]=='U' ){
            c++;
            
        }
        if(a[i]==' ' || a[i]==NULL){
            printf("%d ",c);
            c=0;
            f++;
        }
    }
    if(f==0){
        printf("%d",c);
    }
    //printf("%s",a);
}