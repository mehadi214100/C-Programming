// code by mehadi 
// 1
// 121
// 1231
// 12341
// 123451

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        int value = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        if(i>1){
                printf("%d",1);
            }
        printf("\n");
        
    }
    
    return 0;
}