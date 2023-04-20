#include<stdio.h>
#include<string.h>

int main(){
    char arr[1000000+7];
    gets(arr);
    int sum = 0;
    for (int i = 0; arr[i]!='\0'; i++)
    {
       sum+= (arr[i]-48);
       
    }
    printf("%d",sum);
    
    
    return 0;
}