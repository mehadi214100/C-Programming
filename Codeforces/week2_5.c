// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if (c<65)printf("IS DIGIT");
    else{
        if(c>=97)printf("ALPHA\nIS SMALL");
        else printf("ALPHA\nIS CAPITAL");
    }
    
    return 0;
}