#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int count = 1;
    int value = 7;
    for (int i = 1; i <= n; i++)
    {   
        int counter = value;
        for (int j = 1; j <= count; j++)
        {
            printf("%d ",counter);
            counter++;
        }
        printf("\n");
        count *= 2;
        value *= 2; 

        
    }
    
    return 0;
}