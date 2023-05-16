#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            scanf("%d",&x);
            if(i==j) sum1+= x;
            if ((i+j)== (n-1)) sum2+=x;;
        }
        
    }
    // printf("%d %d",sum1,sum2);
    int res =  sum1 - sum2;
    if(res<0) printf("%d",res*-1);
    else printf("%d",res);
    return 0;
}