// code by mehadi
// 1234
// 341
// 12
// 3

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count = n;
    
    for (int i=1;i<=n;i++){
        int value = n-1;
        for(int j=1;j<=count;j++){
            if(i%2!=0){
                printf("%d",j);
            }else{
                printf("%d",value);
                value++;
                if(value>n){
                    value = 1;
                }

            }
        }
        count--;
        printf("\n");
    }

    return 0;
}