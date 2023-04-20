#include<stdio.h>
#include<string.h>

int main(){
    char arr[1000000+7];
    gets(arr);
    for (int i = 0; arr[i]!='\\'; i++)
    {
        printf("%c",arr[i]);
    }
    
    
    
    return 0;
}