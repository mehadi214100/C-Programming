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
    
    int x = 0;
    while (x<n)
    {
            int i = 0;
            int j = m-1;
            while (i<j)
            {
                int temp = arr[x][i];
                arr[x][i] = arr[x][j];
                arr[x][j]=temp;
                i++;
                j--;
            }
            x++;
    }
    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}