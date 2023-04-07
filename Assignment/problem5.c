#include<stdio.h>
int main(){
    int taka;
    scanf("%d",&taka);
    if(taka>=1500){
        printf("I will buy Punjabi\nI will buy new shoes\nAlisa will buy new shoes");
    }else if(taka>1000){
        printf("I will buy Punjabi");
    }else{
        printf("Bad luck!");
    }
    return 0;
}