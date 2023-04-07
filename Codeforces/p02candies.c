// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P02
#include<stdio.h>

int main(){
    int n,a,b;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}