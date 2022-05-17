
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
    int a,c;
    scanf("%d%d",&a,&c);
    int b[a];
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int k=0;
    
    for(int i=0;i<a;i++){
        if(c==rev(b[i])){
           k++;
       }
       
        
    }
    printf("%d",k);
    

    return 0;
}
