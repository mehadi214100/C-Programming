#include<stdio.h>
#include<string.h>

int main(){
    char arr[1001];
    gets(arr);
    char arr2[1001];
    strcpy(arr2,arr);
    strrev(arr2);
    if(strcmp(arr,arr2)==0){
        printf("YES");
    }else printf("NO");
    
    return 0;
}