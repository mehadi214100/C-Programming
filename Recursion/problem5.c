// To find the sum of digits of a number using recursion.

#include<stdio.h>

int sumDigit(int num){
    if(num==0){
        return 0;
    }else return num%10+sumDigit(num/10);
    
}

int main(){
    int num;
    scanf("%d",&num);
    printf("%d",sumDigit(num));
    return 0;
}