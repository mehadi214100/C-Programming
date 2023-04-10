#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int a = 0;
    int b = 1;
    if(n>=1) printf("%d ",a);
    if(n>=2) printf("%d ",b);
    int count = n-2;
    for (int i = 1; i<=count; i++)
    {
        int c = a+b;
        printf("%d ",c);
        a = b;
        b =c;
    }
    
    return 0;
}