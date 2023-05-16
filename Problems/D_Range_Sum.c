#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long int n1,n2;
        scanf("%lld %lld",&n1,&n2);
        long long int diff ;
        if (n1>=n2)
        {
            diff = n1-n2+1;
        }else diff = n2-n1+1;
        
        long long int sum = (diff*(n1+n2))/2;
        
        
        printf("%lld\n",sum);
        

    }
    

    return 0;
}