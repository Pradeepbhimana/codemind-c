
#include <stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    fgets(a,sizeof a,stdin);
    int b=strlen(a),c=0;
    /*for(int i=0;i<b;i++){
        if(a[i]==' '){
            c++;
        }
    }*/
    
    printf("%d",b);
    return 0;
}
