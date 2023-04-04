#include<stdio.h>

// code by mehadi 

// 543212345
//  4321234 
//   32123  
//    212   
//     1    



int main(){

    int n;
    scanf("%d",&n);
    int left = 1;
    int right = (n*2)-1;
    int value = n;
    int value2 = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n*2)-1; j++)
        {
            if(j>=left && j<=right){
                if (j<=n)
                {
                    printf("%d",value);
                    value--;
                }else{
                    printf("%d",value2+1);
                    value2++;
                }
                
            }else{
                printf(" ");
            }
        }
        left++;
        right--;
        value2 = 1;
        value = n-i;
        printf("\n");
    }
    

    return 0;
}