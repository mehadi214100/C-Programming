// code by mehadi 
// 4572
// 572
// 72
// 2


#include<stdio.h>
int count(int num){
    int c = 0;
    while (num>0)
    {
       num/=10;
        c++;
    }
    return c;
    
}
int main(){
    int number;
    scanf("%d",&number);
    int length = count(number);
    
    int arr[length];
    int i = 0;
    while (number>0)
    {
        arr[i] = number%10;
        number/=10;
        i++;
    }
    int k = 1;
    for (int i = length-1; i >= 0; i--)
    {
        for (int j = length-k; j >=0 ; j--)
        {
            printf("%d",arr[j]);
            
        }
        k++;
        printf("\n");
        
    }
    
    
    return 0;
}