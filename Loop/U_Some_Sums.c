#include<stdio.h>

int digitSum(int n){
    int sum = 0;
    while(n>0){
        sum += (n%10);
        n/=10;
    }
    return sum;
}

int main(){
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    int sum  =0;
    for (int i = 1; i <= n; i++)
    {   
        int ds = digitSum(i);
        if(ds>=a && ds<=b){
            sum+= i;
        }
    }
    printf("%d",sum);
    
    return 0;
}