// code by mehadi 
// 1
// *2
// 1*3
// *2*4
// 1*3*5

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++){
            if((i+j)%2==0){
                printf("%d",j);
            }else {
                printf("*");
            }
        }
        printf("\n");
    }
    
    return 0;
}