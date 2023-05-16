#include<stdio.h>
#include<string.h>

// this function take a string and check palindom or not 
int  is_palindrome(char string[]){

    int i = 0;
    int j = strlen(string)-1;
    
    while (i<j)
    {
        if(string[i]!=string[j]){
            return 0;

        }
        i++;
        j--;
    }
    return 1;
    
}

int main(){
    // this is for take input from user 
    char string[11];
    scanf("%s",string);

    // call the function 
    int op = is_palindrome(string);

    // printf the output based on  is_palindrome return 

    if(op) printf ("Palindrome");
    else printf("Not Palindrome");
    return 0;
}