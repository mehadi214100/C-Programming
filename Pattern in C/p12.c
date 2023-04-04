// code by mehadi
// 1
// A B
// 2 3 4
// C D E F
// 5 6 7 8 9

#include<stdio.h>
int main(){
    int counter = 1;
    int alphabet = 65;
    int num;
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if(i%2!=0){
                printf("%d ",counter);
                counter++;
            }else{
                printf("%c ",alphabet);
                alphabet++;
            }
        }
        printf("\n");
        
    }
    
    return 0;
}