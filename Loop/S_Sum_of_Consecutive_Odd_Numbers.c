#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    while (test--)
    {
       int a,b,sum=0;
       scanf("%d %d",&a,&b);
       int big,small;

        if(a>=b){
            big = a;
            small = b;
        }else {
           big = b;
           small = a;
        }


       for (int i = small+1; i < big; i++)
       {
         if(i%2!=0) sum+=i;
       }
       printf("%d\n",sum);
    }
    
    return 0;
}