#include<stdio.h>

int main(){
    char s1[21],s2[21];
    scanf("%s",s1);
    scanf("%s",s2);
    int i = 0;
    while (1)
    {
        if(s1[i]=='\0' && s2[i]=='\0'){
            printf("%s",s1);
            break;
        }else if(s1[i]=='\0'){
            printf("%s",s1);
            break;
        }else if(s2[i]=='\0'){
            printf("%s",s2);
            break;
        }
        if(s1[i]<s2[i]){
            printf("%s",s1);
            break;
        }else if(s2[i]<s1[i]){
            printf("%s",s2);
            break;
        }else{
            i++;
        }
    }
    
    
    return 0;
}