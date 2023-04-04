#include<stdio.h>

// code by mehadi 
// 7 
// 14 15 
// 28 29 30 31 
// 56 57 58 59 60 61 62 63 
// 112 113 114 115 116 117 118 119 120 121 122 123 124 125 126 127 


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