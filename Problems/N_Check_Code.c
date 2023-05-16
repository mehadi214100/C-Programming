#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    char arr[a+b+2];
    scanf("%s",arr);
    if(arr[a]=='-'){
        arr[a] = '9';
        int check = 1;
        for (int i = 0; arr[i]!='\0'; i++)
        {
            if (arr[i]<48 || arr[i]>57)
            {
                printf("No");
                check = 0;
                break;
            }
            // printf("%d ",arr[i]);
        }
        if(check)printf("Yes");
        
    }else printf("No");
    return 0;
}