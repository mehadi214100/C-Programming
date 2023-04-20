#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int max = -100000;
    int maxpos = -1;
    int minpos = -1;
    int min = 100000;
    for(int i = 0;i<n;i++){
        int x;
        scanf("%d",&x);
        arr[i] = x;
        if(x>=max) {
            max = x;
            maxpos = i;
        }
        if(x<=min) {
            min = x;
            minpos = i;
        }
    }
    arr[minpos] = max;
    arr[maxpos] = min;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}