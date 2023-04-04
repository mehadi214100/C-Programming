// code by mehadi 
// 1
// 121
// 12321
// 1234321
// 123454321

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        int value = 1;
        for (int j = 1; j <= (i*2)-1; j++)
        {
            if(j<=i){
                printf("%d",value);
                value++;
            }else{
                value--;
                printf("%d",value-1);
            }
        }
        printf("\n");
        
    }
    
    return 0;
}