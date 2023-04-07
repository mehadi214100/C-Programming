#include<bits/stdc++.h>
using namespace std;
class Matrix{
    private:
        int a[3][3];
    public:
        int& operator ()(int i,int j){
            return(a[i][j]);
        }
        void display(int i,int j){
            cout<<a[i][j]<<endl;
        }

};

int main(){
    Matrix ob1;
    ob1(0,0) = 5;
    ob1(0,1) = 15;

    ob1.display(0,0);
    ob1.display(0,1);

    return 0;
}