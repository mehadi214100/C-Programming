// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>=b){
        if(a%b==0){
            printf("Multiples");
        }else{
            printf("No Multiples");
        }
    }else{
        if(b%a==0){
            printf("Multiples");
        }else printf("No Multiples");
    }
}