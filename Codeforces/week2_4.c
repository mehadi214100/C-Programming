// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if((n/1000)%2==0){
        printf("EVEN");
    }else printf("ODD");
    // printf("%d",n/1000);
}