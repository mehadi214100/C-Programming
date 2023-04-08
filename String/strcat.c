#include<stdio.h>

void strsum(char d[],char s[]){
    int i=0;
    int length = 0;
    while(d[i]!='\0'){
        length++;
        i++;
    }
    
    int j = 0;
    while(s[j]!='\0'){
        d[length+j]= s[j];
        j++;
    }
    d[length+j] = '\0';
}


int main(){
    char first[30];
    char second[30];
    gets(first);
    gets(second);

    printf("%s\n",first);
    printf("%s\n",second);
    strsum(first,second);
    printf("After concate :\n");
    printf("%s\n",first);
    printf("%s\n",second);
    
    return 0;
} 