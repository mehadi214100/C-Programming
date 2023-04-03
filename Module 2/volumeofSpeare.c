#include<stdio.h>
#include<math.h>
int main(){
    float radius;
    scanf("%f",&radius);
    double volume = (4/3.0)*3.1416*pow(radius,3);

    printf("%.3lf",volume);
    return 0;
}