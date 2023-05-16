#include<stdio.h>

int main(){
    int n,q;
    scanf("%d %d",&n,&q);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    while (q--)
    {
        long long int sum = 0;
        int x,y;
        scanf("%d %d",&x,&y);
        for (int i = x-1; i < y; i++)
        {
            sum+= arr[i];
        }
        printf("%lld\n",sum);

    }
    
    
    return 0;
}