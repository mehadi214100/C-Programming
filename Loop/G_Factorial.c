#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while (n--)
    {   
        int x;
        scanf("%d",&x);
        long long int fact = 1;
        for (int i = 2; i <= x; i++)
        {
            fact*=i;
        }
        printf("%lld\n",fact);
    }
    
    
    return 0;
}