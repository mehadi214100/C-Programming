#include<stdio.h>

void strupr(char s[]){
    for (int i = 0; s[i]!='\0'; i++)
    {
       if(s[i]>=97){
         s[i] = s[i]-32;
       }
    }
    
}

int main(){
    char name[30] = "mehAdi";
    strupr(name);
    printf("%s",name);
    return 0;
}
