#include<stdio.h>
// code by mehadi
//     5    
//    454   
//   34543  
//  2345432 
// 123454321

int main(){

    int n;
    scanf("%d",&n);
    int left = n;
    int right = n;
    int value  = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n*2)-1; j++)
        {
            if(j>=left && j<=right){
                if(j<=n){
                    printf("%d",value);
                    value++;
                }else{
                    value--;
                    printf("%d",value-1);
                
                }
            }else{
                printf(" ");
            }
        }
        value = n-i;
        left--;
        right++;
        printf("\n");
        
    }
    

    return 0;
}