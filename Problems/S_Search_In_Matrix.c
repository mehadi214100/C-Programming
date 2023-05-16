#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    int d;
    scanf("%d",&d);
    int check = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(d==arr[i][j]){
                printf("will not take number");
                check = 0;
                break;
            }
        }
        if (check == 0) break;

    }
                
    if(check)printf("will take number");
    
    return 0;
}