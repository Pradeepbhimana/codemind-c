#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    fgets(a,sizeof a,stdin);
    int b=strlen(a);
    int vo=0,co=0,w=0,d=0;
    
    
    for (int i=0;i<b;i++){
       if(a[i]>='0' && a[i]<='9'){
           d++;
       }
    }
    if(d==0){
        printf("Doesn't contain digit");
    }
    else{
        printf("Contains %d digit",d);    
    }
    
}