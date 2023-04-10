#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        long long int c;
        scanf("%lld",&c);
        int count = 0;
        int i = 0;
        while (c!=0){
            int last = c%2;
            if(last==1){
                count+= pow(2,i);
                i++;
            }
            c/=2;
        }
        printf("%d\n",count);

    }


    return 0;
}