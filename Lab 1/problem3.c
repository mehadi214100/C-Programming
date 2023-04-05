// Write a C program to calculate the distance between the two points.
// Test Data :
// Input x1: 25
// Input y1: 15
// Input x2: 35
// Input y2: 10
// Expected Output:
// Distance between the said points: 11.1803

#include<stdio.h>
#include<math.h>

int main(){
    double x1,y1,x2,y2,result;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    result = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("Distance between the said points: %.4lf",result);


}