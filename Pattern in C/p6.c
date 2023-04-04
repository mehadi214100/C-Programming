// code by mehadi 
// *000000
// 0*00000
// 00*0000
// 000*000
// 0000*00
// 00000*0
// 000000*

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i==j){
                printf("*");
            }else printf("0");
        }
        printf("\n");
    }
    

}