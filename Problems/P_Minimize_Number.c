#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int count = 0;
    while (1)
    {
        int check = 1;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]%2!=0){
                check = 0;
                break;
            }else arr[i] /= 2;
        }
        if (check == 0)
        {
            break;
        }else count++;
        
        
    }
    
    printf("%d",count);
    return 0;
}