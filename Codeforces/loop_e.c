// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int max  = 0;
    while (n--)
    {
        int x;
        scanf("%d",&x);
        if(x>=max) max = x;
    }
    printf("%d",max);
    return 0;
}