#include<stdio.h>

int main(){
    long long int n,k;
    scanf("%lld %lld",&n,&k);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
            scanf("%lld",&arr[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j < n; j++)
        {
            
            if(arr[j]>=arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        
    }
    long long int sum = 0;
    for (int i = 0; i < k; i++)
    {
        if(arr[i]<0)break;
            sum+=arr[i];
    }
    printf("%lld",sum);
    return 0;
}