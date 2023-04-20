#include<stdio.h>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int size;
    if(n%k==0) size = n/k;
    else size = (n/k)+1;
    int arr[size];
    int min = 1000000000;
    int counter = 1;
    int index = 0;
    for(int i = 0;i<n;i++){
        int x;
        scanf("%d",&x);
        if(x<=min) min = x;
        counter++;
        if(counter==k){
            counter = 1;
            arr[index] = min;
            index++;
            min = 1000000000;
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}