#include<stdio.h>

int count = 0;
int reverse(int n){
    if (n<=0 )return count;
    count = count*10+(n%10);
    reverse(n/=10);

}

void printer(int n){
    if(n<=0) return ;
    printf("%d ",n%10);
    printer(n/=10);
}

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
       
    int n;
    scanf("%d",&n);
    int vv = reverse(n);
    // printf("%d",vv);
    printer(vv);
    printf("\n");
    count = 0;
    }
}