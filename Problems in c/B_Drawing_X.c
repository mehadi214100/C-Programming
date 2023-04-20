#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1; i<=n;i++){
        for (int j = 1; j <= n; j++)
        {
            if((n/2)+1 == j && (n/2)+1==i)printf("X");
            else if(j<=(n/2) && i<=(n/2)){
                if(i==j) printf("\\");
                else printf("*");
            }
            else if(j<=(n/2) && i>=(n/2)){
                if((i+j)==(n+1)) printf("/");
                else printf("*");
            }
            else if(j>=(n/2) && i<=(n/2)){
                if((i+j)==(n+1)) printf("/");
                else printf("*");
            }
            else if(j>=(n/2) && i>=(n/2)){
                if(i==j) printf("\\");
                else printf("*");
            }
            
            
            else printf("*");
        }
        printf("\n");
    }
    return 0;
}