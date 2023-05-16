#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int print = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < print; k++)
        {
            if(i%2==0)printf("*");
            else printf("^");
            
        }
        print+=2;
        printf("\n");
        
    }
    
    return 0;
}