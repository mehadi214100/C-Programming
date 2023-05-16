#include<stdio.h>

int main(){
    char string [1010];
    fgets(string,1001,stdin);
    int capital = 0;
    int small = 0;
    int space = 0;
    for (int i = 0; string[i]!='\0'; i++)
    {
        if(string[i]>='A' && string[i]<='Z')capital++;
        else if(string[i]>='a' && string[i]<='z')small++;
        else space++;
    }
    printf("Capital - %d\n",capital);
    printf("Small - %d\n",small);
    printf("Spaces - %d",space);

    return 0;
}