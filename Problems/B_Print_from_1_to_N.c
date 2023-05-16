#include<stdio.h>

void printer(int n){
    if(n==0) return;
    printer(n-1);
    printf("%d\n",n);
}

int main(){
    int n;
    scanf("%d",&n);
    
   
    printer(n);
    return 0;
}