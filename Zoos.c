#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    fgets(a,sizeof a,stdin);
    float z=0,o=0;
    for(int i=0;i<strlen(a);i++){
        if(a[i]=='z'){
            z++;
        }
        else{
            o++;
        }
    }
    float b=z/o;
    if(b==0.5){
        printf("Yes");
    }
    else{
        printf("No");
    }
}