#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int check = 1; 
                for (int k = i; k < j; k++)
                {
                    if(arr[k+1]<arr[k]){
                        check = 0;
                        break;
                    }
                    
                }
                if (check)
                {
                    count++;
                }
                
                
            }
            
            
        }
        
        printf("%d\n",count);

    }
    
    return 0;
}