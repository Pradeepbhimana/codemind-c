#include<stdio.h>
int main(){
    int a,c=0;
    scanf("%d",&a);
    for(int i=2;i<(a/2)+1;i++){
        if(a%i==0){
            printf("Not Mega Prime");
            c++;
            break;
            
        }
        
    }
    if(c==0){
        int b=a;
        while(b!=0){
            int e=b%10;
            if(e==2 || e== 3 || e==5 || e==7){
                b/=10;
            }
            else{
                printf("Not Mega Prime");
                c++;
                break;
            }
            
        }
        if(c==0){
            printf("Mega Prime");
        }
    }
}
