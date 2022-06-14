#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    fgets(a,sizeof a,stdin);
    int b=strlen(a);
    int vo=0,co=0,w=0,d=0;
    for (int i=0;i<b;i++){
       if(a[i]>='a' && a[i]<='z'|| a[i]>='A' && a[i]<='Z'){
            if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='u' || a[i]=='U' || a[i]=='o' || a[i]=='O'){
                vo++;
        
            }
            else{
                co++;
            }
        }
        else{
            if(a[i]>='0' && a[i]<='9'){
                d++;
            }
            else if(a[i]==' '){
                w++;
            }
        
        
        }
        
    }
    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d",vo,co,d,w);
} 