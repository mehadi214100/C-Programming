#include<stdio.h>

int main(){
    char c;int n;
    scanf("%c",&c);
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < arr[i]; j++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    

    return 0;
}