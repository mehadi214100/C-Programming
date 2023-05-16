#include<stdio.h>

void pp(int a){
    for (int i = 1; i <a; i++)
    {
        printf("%d ",i);
    }
    printf("%d",a);
    
}
int main(){
    int n;
    scanf("%d",&n);
    pp(n);
    return 0;
}