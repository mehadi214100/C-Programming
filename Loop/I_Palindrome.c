#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int orginal  = n;
    int reversed  = 0;
    
    while (n>0)
    {
        reversed = (reversed*10)+(n%10);
        n/=10;
    }
    printf("%d",reversed);
    if(reversed==orginal) printf("\nYES");
    else printf("\nNO");
    return 0;
}