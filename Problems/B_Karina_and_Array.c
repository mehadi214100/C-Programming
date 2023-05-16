#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld",&arr[i]);
        }
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(arr[i]>arr[j]){
                    long long int temp = arr[j];
                    arr[j] =  arr[i];
                    arr[i] = temp;
                }
            }
        }
        long long int res1 = arr[0]*arr[1] ;
        long long int res2 = arr[n-1]*arr[n-2];
        long long int res;
        if(res1>=res2) res = res1;
        else res = res2;
        printf("%lld\n",res);
       
    }
    
    return 0;
}