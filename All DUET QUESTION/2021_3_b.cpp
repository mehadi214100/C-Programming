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
        Time operator +(Time &t);
        Time operator ++(); //prefix
        Time operator ++(int); //post increment

};
// + operator overload 
Time Time::operator +(Time &t){
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
//pre increment 
Time Time::operator ++(){
    Time temp;
    seconds++;
    temp.seconds = seconds;
    temp.minutes = minutes;
    temp.hours = hours;
    if(temp.seconds>=60){
        temp.minutes++;
        temp.seconds-=60;
    }
    if(temp.minutes>=60){
        temp.hours++;
        temp.minutes-=60;
    }
    return temp;
}
//post increment 
Time Time::operator ++(int){
    Time temp;
    temp.seconds = seconds;
    temp.minutes = minutes;
    temp.hours = hours;
    seconds++;
    if(seconds>=60){
        minutes++;
        seconds-=60;
    }
    if(minutes>=60){
        hours++;
        minutes-=60;
    }
    return temp;
}
int main(){
    Time t1(6,59,55),t2(3,5,15),t3,t4,t5;
    t3 = t1+t2;
    t3.display();
    ++t3;
    t3.display();
    t4 = ++t3;
    t4.display();
    t5 = t4++;
    t5.display();
    t4.display();
}