#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int mid = (n/2);
    int flag = 1;
    for (int i = 0; i < mid ; i++)
    {
        if(arr[i] != arr[n-i-1]){
            // printf("%d   %d\n",arr[i],arr[n-i]-1);
            printf("NO");
            flag = 0;
            break;
        }
    }         
    if(flag)printf("YES");
    return 0;
}