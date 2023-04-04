#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int iter = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n*2)-1; j++)
        {
            if(i+j==n+1 || i+j==n+iter){
                printf("*");
            }else{
                printf("#");
            }
        }
        iter +=2; 
        printf("\n");
        
    }
    

    return 0;
}