// code by mehadi
// ABCD
// BCDA
// CDAB
// DABC

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count = n;
    int a = 65;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=count;j++){
            printf("%c",a);
            a++;
            if(a>=65+n){
                a = 65;
            }
        }
        a = 0;
        a = 65+i;
        printf("\n");
    }

    return 0;
}