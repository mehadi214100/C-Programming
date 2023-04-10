#include<stdio.h>
#include<math.h>

int main(){
    long long int n,m,k;
    scanf("%lld %lld %lld",&n,&m,&k);
    long long int v  = n;
    long long int v2  = k;

    long long int min = (n <=m && n<=k) ? n : m<k ? m:k;
    n -= min;
    m-=min;
    k-=min;

    long long int min2 = ((n/2)<=k)?(n/2):k;
    long long int res  = min + min2;
    printf("%lld",res);
   
    return 0;
}