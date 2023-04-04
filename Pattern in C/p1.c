#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int counter = 9;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",counter);
            counter -= 2;
        }
        if(i==1){
            counter++;
        }else if(i==n-1){
            counter += 5;
        }else{
            counter += 3;
        }
        printf("\n");
    }
    
}