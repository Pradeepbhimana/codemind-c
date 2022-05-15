#include<stdio.h>
int main(){
    
    int a;
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
   /* printf("%d ",a);
     for(int i=0;i<a;i++){
        printf("%d ",b[i]);
    }*/
    int k;
    int q=0,sum=0;
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
    for(int i=0;i<a;i++){
        if(b[i]%2==0){
            sum+=1;
        }
    }
    printf("%d",sum);
    
}