
#include <stdio.h>

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
        if(b[i]%c==0){
            k++;
        }
        
    }
    printf("%d",k);
    

    return 0;
}
