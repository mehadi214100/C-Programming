// code by mehadi
// **********
// ****  ****
// ***    ***
// **      **
// *        *

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int last = n+1;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n*2;j++){
           if (i>1)
           {
             if(i+j>=n+2 && (i+j)<=last){
                printf(" ");
             }else printf("*"); 
           }else printf("*");
           
        }
        last= last+2;
        printf("\n");
    }

    return 0;
}