#include<stdio.h>

int main(){
    int a=12,b=4,*p1,*p2,x,y,z;
    p1 = &a;
    p2 = &b;
    y =  (4*(-*p2))/ *p1+10;
    printf("%d",y);

    return 0;
}