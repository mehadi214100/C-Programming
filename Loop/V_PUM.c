#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int inc = 1;
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1;j<=3;j++){
            printf("%d ",inc);
            inc++;
        }
        printf("PUM\n");
        inc = inc+1;
    }
    
    return 0;
}