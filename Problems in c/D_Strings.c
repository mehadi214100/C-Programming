#include<stdio.h>
#include<string.h>
int main(){
    char s1[22],s2[22];
    scanf("%s",s1);
    scanf("%s",s2);
    char s[22];
    strcpy(s,s1);
    printf("%d %d\n",strlen(s1),strlen(s2));
    printf("%s\n",strcat(s1,s2));
    char temp = s[0];
    s[0]= s2[0];
    s2[0] = temp;
    printf("%s %s",s,s2);
    return 0;
}