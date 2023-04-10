// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    
    while(n--){
        int x;
        scanf("%d",&x);
        if(x==0) printf("%d",0);
        else {while (x>0)
        {
            printf("%d ",x%10);
            x/=10;
        }
        }
        printf("\n");
    }
    
    return 0;
}