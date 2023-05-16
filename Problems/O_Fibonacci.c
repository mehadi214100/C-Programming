#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    long long int a = 0;
    long long int b = 1;
    if(n==1)printf("%lld",a);
    else if(n==2)printf("%lld",b);
    else{
        long long int c;
        for (int i = 3; i <= n; i++)
        {
            c = a+b;
            a=b;
            b=c;
        }
        printf("%lld",c);
    }
    return 0;
}