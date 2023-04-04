// code by mehadi 
// * *** *** *
// ** ** ** **
// *** * * ***

#include<stdio.h>
int main(){
    int count = 3;
    int value = 4;
    for (int i = 1; i <= 3; i++){   
        int c = count;
        int item = 3;
        for (int j = 1; j <=11; j++)
        { 
            if(i+j == c &&item){
                printf(" ");
                c += value;
                item--;
            }else{
                printf("*");
           }
        }
        value--;
        count += 2;
        printf("\n");
        
    }
    

}