// code by mehadi 
#include<bits/stdc++.h>
using namespace std;

class Time{
    int hours;
    int minutes;
    int seconds;
    public:
        Time():hours(0),minutes(0),seconds(0){};
        Time(int h,int m,int s):hours(h),minutes(m),seconds(s){};

        void display(){
            cout<<"Time "<<hours<<":"<<minutes<<":"<<seconds<<endl;
        }
        Time addTime(Time &t);
};
Time Time::addTime(Time &t){
        Time temp;
        temp.hours = hours + t.hours;
        temp.minutes = minutes + t.minutes;
        temp.seconds = seconds + t.seconds;
        if(temp.seconds>=60){
            temp.minutes++;
            temp.seconds -= 60;
        }
        if(temp.minutes>=60){
            temp.hours++;
            temp.minutes -= 60;
        }
        return temp;

}

int main(){
    Time t1(5,59,55),t2(3,0,5),t3;
    t3 = t1.addTime(t2);
    t3.display();
}