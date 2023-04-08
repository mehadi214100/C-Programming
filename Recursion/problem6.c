// To find GCD of two numbers using recursion.
#include<stdio.h>

int gcd(int n1,int n2){
    if(n2==0){
        return n1;
    }else return gcd(n2,n1%n2);
}

int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("%d",gcd(num1,num2));
}