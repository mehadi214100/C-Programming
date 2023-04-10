#include<stdio.h>

int lucky(int n){
    while (n>0)
    {   
        int last  = n%10;
        if(last!=4 && last!=7){
            return 0;
        }
        n/=10;
    }
    return 1;
    
}


int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int flag  = 0 ;

    for(int i = a;i<=b;i++){
        if(lucky(i)==1) {
            printf("%d ",i);
        flag++;}
    }
    if(flag==0) printf("%d",-1);
    return 0;
}