#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    fgets(a,sizeof a,stdin);
    int c,b;
    scanf("%d%d",&c,&b);
    for (int i=c;i<=b;i++){
        printf("%c",a[i]);
    }
}