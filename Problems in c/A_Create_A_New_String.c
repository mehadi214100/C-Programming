#include<stdio.h>
#include<string.h>
int main(){
    char s1[10005];
    char s2[10005];
    scanf("%s",s1);
    scanf("%s",s2);

    printf("%d ",strlen(s1));
    printf("%d\n",strlen(s2));
    printf("%s ",s1);
    printf("%s",s2);
    return 0;
}