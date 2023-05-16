#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        double v  = m*1.0/2;
        int current = 0;
        bool check = false;
        
        // if(m%2==0) c= m;
        current = (2*m)+m;
        while (current<=n)
        {
            current = current + (current/2);
            if(current==n){
                check = true;
                break;
            }
            // cout<<current<<endl;
        }
        if(check){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
        
    }
    
    return 0;
}