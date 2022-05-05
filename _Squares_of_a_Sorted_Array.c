#include<stdio.h>
int main(){
    
    int a;
    scanf("%d",&a);
    int c[a];
    for(int i=0;i<a;i++){
        scanf("%d",&c[i]);
    }
    
    for(int i=0;i<a;i++){
        c[i]=c[i]*c[i];
     
    }
    
    for(int i=0;i<a;i++){
     //   printf("%d ",c[i]);
    }
    //printf("
");
    for(int i=0;i<a-1;i++){
            for(int j=0;j<a-1-i;j++){
                if(c[j]>c[j+1]){
                    int q=c[j];
                    c[j]=c[j+1];
                    c[j+1]=q;
                }
            }
        }
    for(int i=0;i<a;i++){
        printf("%d ",c[i]);
    }
    
    
}