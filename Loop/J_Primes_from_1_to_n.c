#include<stdio.h>
#include<math.h>

int primecheck(int n){

        int flag = 1;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if(n%i==0){
                return 0;
                flag = 0;
                break;
            }
        }
        return 1;
}


int main(){
    int n;
    scanf("%d",&n);
    for (int i = 2; i <= n; i++)
    {
        if(primecheck(i)==1) printf("%d ",i);
    }
    
    
    return 0;
}