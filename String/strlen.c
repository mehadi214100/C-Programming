#include<stdio.h>

int strlen(char c[]){
    int length = 0;
    for (int i = 0; c[i]!='\0'; i++)
    {
        length++;
    }
    return length;
    
}

int main(){
    char name[30];
    gets(name);
    
    printf("Total Character : %d",strlen(name));
    return 0;
} 