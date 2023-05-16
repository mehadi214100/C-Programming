#include<stdio.h>

void min_max(int n,int arr[]){
    int max = 0;
    int min = 100000;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<=min) min = arr[i];
        if(arr[i]>=max) max = arr[i];

    }
    printf("%d %d",min,max);
    
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    min_max(n,arr);
    return 0;
}