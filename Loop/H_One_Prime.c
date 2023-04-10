#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==1)printf("YES");
    else {
        int flag = 1;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if(n%i==0){
                printf("NO");
                flag = 0;
                break;
            }
        }
        if(flag)printf("YES");
    }
    
    return 0;
}