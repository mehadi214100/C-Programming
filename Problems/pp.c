#include<stdio.h>

float func(float n){
    int res = n*2;
    return res;
}


int main(){
    float n;
    n = 5.2;
    printf("%f",func(n));
    return 0;
}