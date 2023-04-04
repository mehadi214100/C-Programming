// code by mehadi 
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 4*4*4*4
// 3*3*3
// 2*2
// 1

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        for (int  j = 1; j <=(i*2)-1 ; j++)
        {
            if(j%2==0){
                printf("*");
            }else{
                printf("%d",i);
            }
        }
        printf("\n");  
    }

    for (int i = n; i >=1 ; i--)
    {
        for (int  j = 1; j <=(i*2)-1 ; j++)
        {
            if(j%2==0){
                printf("*");
            }else{
                printf("%d",i);
            }
        }
        printf("\n");  
    }
    


}