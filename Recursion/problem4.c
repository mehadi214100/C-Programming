// To count the digits of a given number using recursion.
#include<stdio.h>

int countDigit(int num){
    if(num==0){
        return 0;
    }else return 1+countDigit(num/10);
    
}

int main(){
    int num;
    scanf("%d",&num);
    printf("%d",countDigit(num));
    return 0;
}