#include<stdio.h>
int main(){
    int a,c;
    scanf("%d",&a);
    
    for (int i=0;i<a;i++){
        int c;
        scanf("%d",&c);
        int b[c];
        for(int i=0;i<c;i++){
            scanf("%d",&b[i]);
        }
        int q=0;
        for(int i=0;i<c;i++){

            for(int j=0;j<c;j++){
                for(int k=0;k<c;k++){
                    if(i!=j && j!=k && i!=k){
                        if(b[i]+b[j]==b[k]){
                            q++;
                        }
                    }
                }
            }
        }
        if(q==0){
            printf("-1
");
        }
        else{
            printf("%d
",q/2);
        }
    }
    

}