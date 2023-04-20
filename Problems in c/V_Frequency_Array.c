#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[m+1];
    for (int i = 1; i <= m; i++)
    {
        arr[i] = 0;
    }
    
    

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d",&x);
        arr[x]++;
    }
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    
    return 0;
}