#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<a;i++){
        for(int j=i;j<a;j++){
            if(i!=j){
                if(b[i]==b[j]){
                    for(int k=j;k<a;k++){
                        b[k]=b[k+1];
                    }
                    a--;
                    j--;
                }
                
                
            }
        }
    }
    
    
    
    
    for(int h=0;h<a;h++){
        printf("%d ",b[h]);
    }
}