// code by mehadi 

// ABCBA
// AB BA
// A   A
// AB BA
// ABCBA
#include<stdio.h>
int main(){
    // n must be odd 
    int n;
    scanf("%d",&n);
    int left = (n/2)+2;
    int right = (n/2)+1;
    for (int i = 1; i <= n; i++)
    {
        int a = 65;
        for (int j = 1; j <= n; j++)
        {
                if(i!=1 && i!=n){
                    if (j>=left && j<right) printf(" ");
                    else printf("%c",a);
                }else printf("%c",a);
                if(j<=n/2) a++;
                else a--;
            
        }
        if(i<=(n/2)){
            left--;
            right++;
        }else{
            left++;
            right--;
            
        }
        printf("\n");
        
    }
    
    return 0;
}