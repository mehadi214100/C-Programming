#include<bits/stdc++.h>
using namespace std;

class Family{
    int size;
    string *names;
    int *ages;
    public:
        Family(int s,string *n,int *a):size (s),names(n),ages(a){}

        void display(){
            int sum = 0;
            cout<<"Family Member:"<<endl;
            for (int i = 0; i < size; i++)
            {
                cout<<names[i]<<"\t"<<ages[i]<<endl;
                sum+= ages[i];
            }
            cout<<"Average age :"<<sum*1.0/size<<endl;
        }
};


int main(){
    string name[] = {"Mehadi","Tomal","Raja","Shakib","Jahirul"};
    int age[] = {22,57,19,18,25};
    string name1[] = {"Siss","Shimul","Tuhin"};
    int age1[] = {24,25,8};

    Family f1(5,name,age),f2(3,name1,age1);
    f1.display();
    f2.display();
    
    int maximum = max(*max_element(age,age+5),*max_element(age1,age1+3));
    int minimum = min(*min_element(age,age+5),*min_element(age1,age1+3));
    string youngest,eldest;
    for (int i = 0; i < 5; i++)
    {
        if(age[i]==maximum){
            eldest = name[i];
        }
        if(age[i]==minimum){
            youngest = name[i];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if(age1[i]==maximum){
            eldest = name1[i];
        }
        if(age1[i]==minimum){
            youngest = name1[i];
        }
    }
    
    cout<<"Youngest Member "<<youngest<<"\t"<<minimum<<endl;
    cout<<"Eldest Member "<<eldest<<"\t"<<maximum<<endl;


    return 0;
}