#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,l,a;
    cin>>n>>l>>a;
    vector<pair<int,int>>v;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    if(n==0){
        int count = l/a;
        cout<<count;
    }else{
        int currentTime = 0;
        int result = 0;
        for (int i = 0; i < n; i++)
        { 
            int difference = v[i].first-currentTime;
            if(difference>=a){
                result+= difference/a;
            }else{
                currentTime = v[i].first;
            }
            currentTime += v[i].second;
        }
        result += (l-currentTime)/a;
        cout<<result;
    }
    
    return 0;
}