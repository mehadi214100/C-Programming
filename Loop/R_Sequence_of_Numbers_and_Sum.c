#include<stdio.h>

int main(){
    int a ,b;
    scanf("%d %d",&a,&b);
    while (a>0 && b>0)
    {
        int start = a>=b ? a : b;
        int end = (a+b)-start;
        int sum = 0;
        // printf("%d %d\n",start,end);

        for (int i = end; i <= start; i++)
        {
            printf("%d ",i);
            sum+=i;
        }
        printf("sum =%d\n",sum);
        int x,y;
        scanf("%d %d",&x,&y);
        a = x;
        b = y;

    }
    

    return 0;
}