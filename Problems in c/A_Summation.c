#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    long long int sum = 0;
    for (long long int i = 0; i < n; i++)
    {
        int x;

        scanf("%d",&x);
        sum += x;
    }
        

    if(sum<0){
        sum = (-1*sum);
        printf("%d",sum);
    }else printf("%d",sum);
    
    return 0;
}