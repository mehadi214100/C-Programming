#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int min = 100000+10;
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<=min) min = arr[i];
    }
    int sum = 0;
    for(int i = 0;i<n;i++){
        
        if(arr[i]==min) sum++;
    }
    if(sum%2==0){
        printf("Unlucky");
    }else printf("Lucky");
    
    return 0;
}