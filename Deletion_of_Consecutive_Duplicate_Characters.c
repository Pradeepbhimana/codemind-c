#include<stdio.h>
#include<string.h>
int main(){
    int q;
    scanf("%d",&q);
    int z=0;
    for(int w=0;w<=q;w++){
        char a[100];
        fgets(a,sizeof a,stdin);
        int b=strlen(a),e=strlen(a);
        for( int i=0;i<b-1;i++){
            
            if(a[i]==a[i+1]){
                
                for(int j=i;j<b;j++){
                    char c=a[j];
                    a[j]=a[j+1];
               
                
                }
                i--;
                b--;
            }
            
        }
        if(z>0){
            printf("%d
",e-b);
        }
        z++;
    }
}