#include<stdio.h>

int main(){
    int n = 10;
    // scanf("%d",&n);
    int * p = &n;
    printf("%p\n",p);
    printf("%p\n",&n);
    *p = 1040;
    printf("%p\n",p);

    printf("%d\n",sizeof(n));
    printf("%p\n",*p);

    return 0;
}