#include<stdio.h>
#include<math.h>
int main(){
    double x,y;
    int count = 0;
    printf("Enter five real number in one line :\n");
    read:
        scanf("%lf",&x);
        if(x<0){
            printf("%d is a negative \n",x);
        }else{
            y = sqrt(x);
            printf("%lf = %lf\n",x,y);
        }
        count+=1;
        if(count<5){
            goto read;
        }else{
            printf("End ");
        }
}