#include<stdio.h>

int dividecounter(int num){
    int counter = 0;
    while (num%2==0)
    {
        counter++;
        num/=2;
    }
    return counter;
}

int main(){
    int n;
    scanf("%d",&n);
    int max  = 0;
    while(n--){
        long long int x;
        scanf("%lld",&x);
        int v = dividecounter(x);
        if(v>=max) max = v;
    }
    printf("%d",max);
    return 0;
}