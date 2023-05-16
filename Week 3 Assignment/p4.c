#include<stdio.h>
// ==== Function 1 =====
// this function has Return + Parameter 
// this function take 2 parameter 1. base 2. power 
// it work like pow function 

int pow_func(int base,int power){ // get parameter 
    int op = 1;
    for (int i = 1; i <=power; i++)
    {
        op *= base;
    }
    return op; // retuen something 

}
// =========Function 2 ===========
// this function has Return + No Parameter
// this function get a number from user and check even or odd 

int even_odd(){ // no parameter 
    int number ;
    printf("Enter any number :");
    scanf("%d",&number);
    if(number%2==0) return 1;
    return 0; // retuen something 
}


// ========Function 3 ==========
// this function has  No Return + Parameter
// this function take 1 parameter and print factorial of this number
void factorial(int num){
    int result = 1;
    for (int i = 1; i <=num; i++)
    {
        result*=i;
    }
    printf("Factorial %d is %d\n",num,result);
    // not return 
}

// ===========Function 4 ==========
// this function No Return + No Parameter ;
// this describe about you 
void who_are_you(){
    char name [30] ;
    int age ;
    printf("Enter Your First name :");
    scanf("%s",name);
    printf("Enter your age :");
    scanf("%d",&age);
    printf("Welcome -> %s\n",name);
    printf("Your age %d\n",age);
    printf("Thank you !!");

}


int main(){
    // call pow_func and value store in result 
    int result = pow_func(2,3); 
    printf("Call Parater and Return Function :%d\n",result);

    // call even_odd functin and this function is not take any argument 
    int output = even_odd();
    if(output) printf("Even Number\n");
    else printf("Odd Number\n");

    // call factorial function it takes one number and print factorial this number 
    factorial(5);

    // call who_are_you function it takes no parameter and not return anything
    who_are_you();

    return 0;
}