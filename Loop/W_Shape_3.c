#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int left  = n;
    int right = n;
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j<=(n*2)-1;j++){
            if(j>=left && j<=right){
                printf("*");
            }else if(j<=right)printf(" ");
        }
        left--;
        right++;
        printf("\n");
    }
     left  = 1;
     right = (n*2)-1;
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j<=(n*2)-1;j++){
            if(j>=left && j<=right){
                printf("*");
            }else if(j<=right)printf(" ");
        }
        left++;
        right--;
        printf("\n");
    }



    return 0;
}