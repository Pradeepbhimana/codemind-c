#include<stdio.h>
#include<math.h>
int main(){
    int a,c,d;
    scanf("%d",&a);
    int arr[a];
    int b=0;
    while(b<a){
        arr[b]=pow(2,b);
        b++;
    }
    for (int i=0;i<a;i++){
        if(a<=arr[i]){
            c=arr[i];
            d=arr[i-1];
            break;
        }
    }
    int p=abs(c-a);
    int q=abs(d-a);
    if(p>q){
        printf("%d",q);
    }
    else{
        printf("%d",p);
    }
}