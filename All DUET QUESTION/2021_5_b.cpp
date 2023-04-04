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
        void eldest(Family &f1);
        void youngest(Family &f1);

};

void Family::youngest(Family &f1){
    int minimum = min(*min_element(f1.ages,f1.ages+f1.size),*min_element(ages,ages+size));
    string youngest;
    for (int i = 0; i < f1.size; i++)
    {
        if(f1.ages[i]==minimum){
            youngest = f1.names[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if(ages[i]==minimum){
            youngest = names[i];
        }
    }
    cout<<"Youngest Member "<<youngest<<"\t"<<minimum<<endl;

};

void Family::eldest(Family &f1){
    int maximum = max(*max_element(f1.ages,f1.ages+f1.size),*max_element(ages,ages+size));
    string eldest;
    for (int i = 0; i < f1.size; i++)
    {
        if(f1.ages[i]==maximum){
            eldest = f1.names[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if(ages[i]==maximum){
            eldest = names[i];
        }
    }
    cout<<"Eldest Member "<<eldest<<"\t"<<maximum<<endl;

};




int main(){
    string name[] = {"Mehadi","Tomal","Raja","Shakib","Jahirul"};
    int age[] = {22,57,19,18,25};
    string name1[] = {"Siss","Shimul","Tuhin"};
    int age1[] = {24,25,8};

    Family f1(5,name,age),f2(3,name1,age1);
    f1.display();
    f2.display();
    f1.youngest(f2);
    f1.eldest(f2);
    return 0;
}