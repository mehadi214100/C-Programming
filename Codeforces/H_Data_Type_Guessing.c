#include<stdio.h>

int main(){
    double n,k,a;
    scanf("%lf %lf %lf",&n,&k,&a);


    double result = (n*k)*1.0/a;
    long long  int res = result;
    double diff = (result-res);

    if(diff>0){
        printf("double");
    }else {
        if(res>=-2147483648 && res<= 2147483647)printf("int");
        else printf("long long");
    }
    return 0;
}