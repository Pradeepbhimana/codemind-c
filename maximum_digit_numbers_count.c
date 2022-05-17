
#include <stdio.h>
int rev(int a){
    if(a==0){
        return 1;
    }
    int b=a,c=0;
    while(b!=0){
        c+=1;
        b/=10;
    }
    return c;
}

int main()
{
    int a,c=0;
    scanf("%d",&a);
    int b[a];
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int k=rev(b[0]);
    
    for(int i=0;i<a;i++){
        if(k<rev(b[i])){
           k=rev(b[i]);
           
       }
       //printf("%d   ",b[i]);
       
        
    }
    for(int i=0;i<a;i++){
        if(k==rev(b[i])){
            printf("%d ",b[i]);
        }
    }
    
    

    return 0;
}
