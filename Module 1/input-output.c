#include<stdio.h>
int main(){
    int num;
    float cgpa;
    char favochar;
    // for percentage input 
    scanf("%d%%\n",&num);
    printf("%d%%\n",num);
    scanf("%f\n",&cgpa);
    printf("%.3f\n",cgpa);
    scanf("%c\n",&favochar);
    printf("%c",favochar);

    return 0;
}