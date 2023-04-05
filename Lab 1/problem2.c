// Write a C program to convert specified days into years, weeks and days.
// Note: Ignore leap year.
// Test Data :
// Number of days : 1329
// Expected Output :
// Years: 3
// Weeks: 33
// Days: 3
#include<stdio.h>
int main(){
    int days;
    scanf("%d",&days);
    int years = days/365;
    int weeks = (days%365)/7;
    int day = (days%365)%7;
    printf("Years :%d\nWeeks: %d\nDays:%d",years,weeks,day);


}