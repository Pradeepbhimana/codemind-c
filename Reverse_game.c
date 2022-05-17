
#include <stdio.h>
int rev(int a){
    int b=a,c=0;
    while(b!=0){
        c=c*10+b%10;
        b/=10;
    }
    printf("%d ",c);
}

int main()
{
    int a,c;
    scanf("%d",&a);
    int b[a];
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int k=0;
    
    for(int i=0;i<a;i++){
        rev(b[i]);
        
    }
    //printf("%d",k);
    

    return 0;
}
