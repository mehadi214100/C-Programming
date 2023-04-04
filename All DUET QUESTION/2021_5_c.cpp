#include<bits/stdc++.h>
using namespace std;

int count (int num){
    int c = 0;
    while (num>0)
    {
        c++;
        num/=10;
    }
    return c;
}

int main(){
    int number;
    cin>>number;
    int original = number;
    int reverse = 0;
    while (number>0)
    {
        int last = number%10;
        reverse = (reverse*10)+last;
        number/=10;
    }
    if(count(original)==count(reverse)){
        cout<<reverse;
    }else{
        int zero = count(original)-count(reverse);
        for (int i = 0; i < zero; i++)
        {
            cout<<0;
        }
        cout<<reverse;
        
    }
    return 0;
}