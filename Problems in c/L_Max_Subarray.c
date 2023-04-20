#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int max = -1000000;
                for (int k = i; k <= j; k++)
                {
                    if(arr[k]>=max) max = arr[k];
                }
                printf("%d ",max);
            }
            
            
        }
        printf("\n");

        

    }
    
    return 0;
}