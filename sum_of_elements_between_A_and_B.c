#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
        
    }
    int c,d;
    scanf("%d%d",&c,&d);
    
    /*//for(int h=0;h<a;h++){
    //    printf("%d ",b[h]);
    //}
    //printf("
");
    
        for(int i=0;i<a-1;i++){
            for(int j=0;j<a-1-i;j++){
                if(b[j]>b[j+1]){
                    int q=b[j];
                    b[j]=b[j+1];
                    b[j+1]=q;
                }
            }
        }
        /*for(int h=0;h<a;h++){
            printf("%d ",b[h]);
        }
        printf("
");*/
        
    /*for(int i=0;i<a;i++){
        for(int j=i;j<a;j++){
            if(i!=j){
                if(b[i]==b[j]){
                    for(int k=j;k<a;k++){
                        b[k]=b[k+1];
                    }
                    a--;
                    j--;
                }
                
                
            }
        }
    }
    //for(int h=0;h<a;h++){
    //    printf("%d ",b[h]);
    //}
    //printf("
");
    int w[a];
    int co=0;
    for(int h=a-1;h>=0;h--){
        w[co]=b[h];
        co+=1;
    }
    if(a<3){
        printf("It is Not Possible");
    }
    else {
        printf("%d",w[2]);
    }*/
    int min=0,k=0;
    /*if(c>d){
        min=c;
    }
    else{
        min=d;
    }*/
    for(int i=0;i<a;i++){
        if(b[i]>=c && b[i]<=d || b[i]<=c && b[i]>=d){
            
            min+=b[i];
            k++;
            
        }
    }
    /*if(k==0){
        printf("-1");
    }
    else{
        printf("%d",min);
    }*/
    printf("%d",min);
    
    
}