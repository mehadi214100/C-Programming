#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long int s,a,b,c;
        scanf("%lld %lld %lld %lld",&s,&a,&b,&c);
        long long int res = s-(a+b+c);
        printf("%lld\n",res);
    }
    
    return 0;
}