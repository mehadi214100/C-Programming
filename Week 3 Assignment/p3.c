#include<stdio.h>

// this is count_before_zero function it take 2 parameter 
// 1st = array
// 2nd  = size 
int count_before_zero(int arr[],int size){
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        // when we get 0 then return the function 

        if(arr[i]==0) return count;
        count++;
    }
    
}

int main(){
    // input n => number of array elements 
    int n;
    scanf("%d",&n);
    int arr[n];
    // input array elements from user 
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    // call the function and store in a variable 
    int total = count_before_zero(arr,n);
    
    // output the result 
    printf("%d",total);
    return 0;
}