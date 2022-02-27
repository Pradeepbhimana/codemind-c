#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int g=0;
    for(int j=0;j<a;j+=2){
        if(arr[j]%2==0){
            g+=1;
        }
    }
    int k=0;
    for(int j=1;j<a;j+=2){
        if(arr[j]%2==0){
            k+=1;
        }
    }
    
    
    if(g>0&&k==0){
        printf("True");
        //printf("%d",g);
    }
    else{
        printf("False");
        //printf("%d",g);
    }
}