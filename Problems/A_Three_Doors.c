#include<stdio.h>

int res(int arr[],int k){
        int nextkey = arr[k-1];
        if(nextkey==0){
            printf("NO\n");
            return 0;
        }
        int next2 = arr[nextkey-1];
        if(next2==0){
            printf("NO\n");
            return 0;
        }
        printf("YES\n");
        return 0;
}


int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int k;
        scanf("%d",&k);
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            scanf("%d",&arr[i]);
        }
        res(arr,k);
    }
    
}