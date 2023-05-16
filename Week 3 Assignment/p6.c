#include<stdio.h>

void call_by_value(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}

void call_by_reference(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a  = 10 ;
    int b  = 20;
    call_by_value(a,b);
    printf("After call by value a = %d b = %d\n",a,b);

    call_by_reference(&a,&b);
    printf("After call by reference a = %d b = %d\n",a,b);

    return 0;
}