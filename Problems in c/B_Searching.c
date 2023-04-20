#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==x){
            printf("%d",i);
            flag = 0;
            break;
        }
    }
    if(flag)printf("%d",-1);
    return 0;
}