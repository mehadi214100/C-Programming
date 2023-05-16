#include<stdio.h>

void printer(int n){
    if(n==0) return;
    if(n==1)printf("%d",1);
    else printf("%d ",n);
    printer(n-1);
    
}

int main(){
    int n;
    scanf("%d",&n);
    printer(n);
    
    return 0;
}