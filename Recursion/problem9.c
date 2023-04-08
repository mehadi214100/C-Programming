// To calculate the factorial of natural numbers till a range
// inputted by user by recursion.
#include<stdio.h>

int fact(int n){
    if(n==0){
        return 1;
    }else return n*fact(n-1);
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d! = %d",n,fact(n));
    return 0;
}