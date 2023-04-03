#include<stdio.h>

int main(){
    // program for second large number 
    int a,b,c; // input
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a>=b && a>=c){
        if(b>=c)printf("%d",b);
        else printf("%d",c);
    }else if(b>=c){
        if(a>=c)printf("%d",a);
        else printf("%d",c);
    }else{
        if(b>=a)printf("%d",b);
        else printf("%d",a);
    }
    




    return 0;
}