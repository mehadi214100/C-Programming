// code by mehadi
// ABCD
// CDA
// AB
// C

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count = n;
    
    
    for (int i=1;i<=n;i++){
        int c = (65+n)-2;
        int a = 65;
        for(int j=1;j<=count;j++){
            if(i%2!=0){
                printf("%c",a);
                a++;
            }else{
                printf("%c",c);
                c++;
                if(c>(65+n)-1){
                    c = 65;
                }

            }
        }
        count--;
        printf("\n");
    }

    return 0;
}