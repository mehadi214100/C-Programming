#include<stdio.h>

int main(){
    // for get input from user 
    int n;
    scanf("%d",&n);

    // this loop for total row print 
    for (int i = 1; i <= n; i++)
    {
        // this loop for space print  
        // every row space decrease by number of row (i)
        for (int j = 1; j<=n-i; j++)
        {
            printf(" ");
        }
        // for number print 
        // every column print only row number (i)
        for (int k = 1; k <= i; k++)
        {
            printf("%d",i);
        }
        printf("\n");
        
    }
    
    return 0;
}