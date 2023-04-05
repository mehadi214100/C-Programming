// Write a C program to compute the perimeter and area of a rectangle with a
// height of 7 inches. and width of 5 inches.
// Expected Output:
// Perimeter of the rectangle = 24 inches
// Area of the rectangle = 35 square inches

#include<stdio.h>
int main(){
    int height,width;
    scanf("%d %d",&height,&width);
    int perimeter = 2*(height+width);
    int area = height*width;

    printf("Perimeter of the rectangle = %d inches\n",perimeter);
    printf("Area of the rectangle = %d square inches",area);

}