// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if(c<97){
        printf("%c",c+32);
    }else{
        printf("%c",c-32);
    }
    return 0;
}