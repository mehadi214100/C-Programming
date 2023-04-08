// To generates the Fibonacci series for a given number using
// a recursive function.

#include<stdio.h>

int fibo(int num){
    if(num<=1){
        return num;
    }else{
        return fibo(num-1)+fibo(num-2);
    }
}


int main(){
    int n;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ",fibo(i));
    }
    

    return 0;
}
