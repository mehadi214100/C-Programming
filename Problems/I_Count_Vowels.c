#include<stdio.h>
int count = 0;
int counter(int i,char arr[]){
    if(arr[i]=='\0') return count;
    else if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'){
        count++;
    }else if(arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'){
        count++;
    }
    counter(i+1,arr);
}

int main(){
    char arr[210];
    gets(arr);
    int v = counter(0,arr);
    printf("%d",v);
    return 0;
}