#include<stdio.h>

int main(){
    int k,s;
    scanf("%d %d",&k,&s);
    int count=0;
    for(int i = 0;i<=k;i++){
        for (int j = 0; j <= k; j++)
        {
            if(s-i-j>=0 && s-i-j<=k){
                count++;
            }
        }
        
    }


    printf("%d",count);
    return 0;
}