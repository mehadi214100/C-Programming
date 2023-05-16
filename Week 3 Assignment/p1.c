//Code by Mehadi 

#include<stdio.h>

int main(){
    // for get input from user 
    int n;
    scanf("%d",&n);

    int space = (n-1); // this is for space print 
    int number = 1; // this is for number print 
    
    // this loop for print total number of row and total row is (2*n)-1

    for (int i = 1; i <= (2*n)-1; i++)
    {
        // this loop for space print 

        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        // this loop for number print 

        for (int k = 1; k <= number; k++)
        {
            printf("%d",k);
        }

        // here some condition for control space and number 
        if(i<n){
            space--;
            number += 2;
        }else{
            space++;
            number-=2;
        }
        printf("\n");
        
    }
    
    return 0;
}