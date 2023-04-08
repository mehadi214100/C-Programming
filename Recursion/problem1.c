// To print first 50 natural numbers using recursion.

#include<stdio.h>

void printNumber(int num){
    if(num<=50){
        printf("%d\n",num);
        printNumber(num+1);
    }
}

int main(){
    printNumber(1);
}