#include<stdio.h>

int strcom(char s1[],char s2[]){
    
    int i;

    for (int i = 0; i < s1[i]!='\0'; i++)
    {
        if(s1[i]!=s2[i]){
            return 0;
        }
    }
    return 1;
    

}


int main(){
    char first[30];
    char second[30];
    gets(first);
    gets(second);

    if(strcom(first,second))printf("Same ");
    else printf("Different ");
    
    
    return 0;
} 