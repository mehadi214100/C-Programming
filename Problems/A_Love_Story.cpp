#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        string code = "codeforces";
        int count = 0;
        for (int i = 0; i < 10; i++)
        {
            if(code[i]!=s[i])count++;
        }
        cout<<count<<endl;
        
    }
    
    return 0;
}