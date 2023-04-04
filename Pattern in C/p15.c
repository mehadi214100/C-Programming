// code by mehadi
// 1     
// 21   
// 321   
// 4321  
// 54321 
// a
// ba
// cba
// dcba
// edcba
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--){
            printf("%d",j);
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 96+i; j >= 97; j--){
            printf("%c",j);
        }
        printf("\n");
    }
}