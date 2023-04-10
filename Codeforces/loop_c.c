// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int even=0;
    int odd=0;
    int postive=0;
    int negative=0;
    while (n--)
    {
        int x;
        scanf("%d",&x);
        
        if(x%2==0) even++;
        if(x%2!=0)odd++;
        if(x>0)postive++;
        if(x<0)negative++;

    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",postive);
    printf("Negative: %d\n",negative);

    
    return 0;
}