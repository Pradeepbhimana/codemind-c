#include<stdio.h>
int main(){
    int a,c;
    scanf("%d",&a);
    
    for (int i=0;i<a;i++){
        int c,w;
        scanf("%d%d",&c,&w);
        int b[c];
        for(int i=0;i<c;i++){
            scanf("%d",&b[i]);
        }
        int q=0,s;
        for(int i=0;i<c;i++){
            s=0;
            for(int j=i;j<c;j++){
                s+=b[j];
                if(s==w){
                    printf("%d %d
",i+1,j+1);
                    q=1;
                    break;
                }
                if(q==1){
                    break;
                }
                
            }
        }
        if(q==0){
            printf("-1
");
        }
        
    }
    

}