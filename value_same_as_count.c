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
    for (int i=0;i<a;i++){
        k=0;
        for (int j=0;j<a;j++){
            if(b[i]==b[j]){
                k++;
            }
        }
        if(k==b[i]){
            sum+=b[i];
            q+=1;
           
            
            b[i]=-1;
        }
    }
    //printf("%f %f",sum,q);
    //printf("%0.2f",sum/q);
    
   
    printf("%d",q);
}