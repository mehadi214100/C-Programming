#include<bits/stdc++.h>
using namespace std;

class Array{
    private:
        int arr[10];
    public:
        void setter(int index,int value){
            arr[index] = value;
        }
        int operator [](int index){
            return arr[index];
        }
};

int main(){
    Array ob1;
    for (int i = 0; i <10; i++)
    {
        ob1.setter(i,i*10);
    }
    for (int i = 0; i <10; i++)
    {
        cout<<ob1[i]<<endl;
    }
    return 0;
}