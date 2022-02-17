#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[10];
    for(int i=2;i<10;i++){
        arr[0]=1;
        arr[1]=1;
        arr[i]=arr[i-1]*i;
    }
    
    int c=a, b=0;
    while(c!=0){
        b+=1;
        c=c/10;
    }
    int e=0,f=a,ar[b];
    while(f!=0){
        ar[e]=f%10;
        f=f/10;
        e+=1;
    }
    int sum=0;
    for (int i=0;i<b;i++){
        sum=sum+arr[ar[i]];
    }
    if (sum==a){
        printf("The number %d is a strong number",a);
    }
    else{
        printf("The number %d is not a strong number",a);
    }
    
}