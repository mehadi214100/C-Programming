#include<stdio.h>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    int count = 0;
    int min = 1000000000;
    int l = 0;
    if(k<n){
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        if(count+1>=k){
            if(arr[i]<=min) min = arr[i];
            printf("%d ",min);
            // printf("%d %d\n",min,arr[i]);
            min = 1000000000;
            count = 0;
            l = i;
        }else {
            if(arr[i]<=min) min = arr[i];
            count++;
        }
        

    }
    min = 1000000000;
    int noi = n-l-1;
    l++;
    if(noi!=0){
    while (noi--)
    {
        if(arr[l]<=min) min = arr[l];
        l++;
    }
    printf("%d",min);
    }}
    else{
        int min = 1000000000;
    
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }
        
        for (int i = 0; i < n; i++)
        {
            if(arr[i]<min) min = arr[i];
        // printf("%d ",arr[i]);

        }
        
        printf("%d",min);
    }
    
    
    return 0;
}