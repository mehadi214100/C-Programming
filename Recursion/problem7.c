// To convert a decimal number to binary using recursion.
#include <stdio.h>

int decimal_to_binary(int n) {
    if(n==0){
        return 0;
    }else{
        return  n%2 + 10 * decimal_to_binary(n/2);
    }
}

int main() {
    int decimal_num =9;  
    printf("Binary representation of %d is: %d", decimal_num,decimal_to_binary(decimal_num));
    
    return 0;
}
