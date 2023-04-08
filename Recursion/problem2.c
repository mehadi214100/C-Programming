// To calculate the sum of Natural Numbers Using Recursion.

#include<stdio.h>

int calculate(int num){
    if(num==1){
        return 1;
    }else{
        
        return num + calculate(num-1);
    }
}

int main(){
    printf("%d",calculate(5));
}