#include<bits/stdc++.h>
using namespace std;

int index = 0;
void printer(string s){
    if(index==s.length()) return;
    cout<<s[index]<<" ";
    index++;
    printer(s);
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       string s;
       cin>>s;
       printer(s);
       cout<<"\n";
       index = 0;
    }
    
    return 0;
}